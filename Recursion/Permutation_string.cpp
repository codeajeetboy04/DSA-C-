#include<iostream>
#include<vector>
using namespace std;
void solve(string &s,vector<string>&ans,int index){

    //base case
    if(index >= s.size()){
        ans.push_back(s);
        return ;
    }

    for(int j=index;j<s.size();j++){
        
        swap(s[index],s[j]);

        solve(s,ans,index+1);

        //backtrack
        swap(s[index],s[j]);
    }
}
vector<string>permutation(string s){

    vector<string> ans;
    int index = 0;

    solve(s,ans,index);

    return ans;
}
int main(){

    string s = "abc";

    vector<string> ans = permutation(s);

    for(auto str : ans){
        cout << str << endl;
    }

    return 0;
}