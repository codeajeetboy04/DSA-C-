#include<iostream>
#include<climits>
using namespace std;

int getmin(int arr[],int n){

    int mini = INT_MAX;

    for(int i=0;i<n;i++){
        mini = min(arr[i],mini);
    }
    return mini;
}

int getmax(int arr[],int n){

    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        maxi = max(arr[i],maxi);
    }
    return maxi;
}
int main(){
    int arr[6] = {4,7,10,1,11,20};
    int n = 6;

    cout << "minimum element is " << getmin(arr,n) << endl;
    
    cout << "maximum element is " << getmax(arr,n) << endl;

    return 0;
}