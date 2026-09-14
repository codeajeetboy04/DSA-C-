#include<iostream>
using namespace std;

bool linearsearch(int arr[],int n,int tar){

    for(int i=0;i<n;i++){

        if(arr[i] == tar){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[7] = {2,5,6,1,8,9,10};
    int n = 7;
    int tar = 9;
    if(linearsearch(arr,n,tar)){
        cout << "Element is found " << endl;
    }
    else{
        cout << "Element is not found " << endl;
    }

    return 0;
}