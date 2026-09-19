#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> arr, vector<int> output, int index,
           vector<vector<int>>& ans) {

    // base case
    if(index >= arr.size()) {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(arr, output, index + 1, ans);

    // include
    int ele = arr[index];
    output.push_back(ele);

    solve(arr, output, index + 1, ans);

    // backtracking
    output.pop_back();
}

vector<vector<int>> subset(vector<int>& arr) {

    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;

    solve(arr, output, index, ans);

    return ans;
}

int main() {

    vector<int> arr = {1, 2, 3};

    vector<vector<int>> ans = subset(arr);

    for(int i = 0; i < ans.size(); i++) {

        cout << "[";

        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j];

            if(j != ans[i].size() - 1)
                cout << ",";
        }

        cout << "]" << endl;
    }

    return 0;
}