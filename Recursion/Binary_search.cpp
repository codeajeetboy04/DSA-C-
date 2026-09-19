#include<iostream>
using namespace std;

bool binarysearch(int arr[],int s,int e,int key){
    //base case
    //element not found
    if(s > e){
        return false;
    }

    int mid = s + (e - s) / 2;
    //element found
    if(arr[mid] == key){
        return true;;
    }
    else if(key > arr[mid]){
        return binarysearch(arr,mid+1,e,key);
    }
    else{
        return binarysearch(arr,s,mid-1,key);
    }

}
int main(){

    int arr[6] = {2,4,6,7,8,9};
    int size = 6;
    int key = 8;

    int ans = binarysearch(arr,0,size-1,key);

    if(ans){
        cout << "Element is found " << endl;
    }
    else{
        cout << "Element is Not found " << endl;
    }
    
    return 0;
}