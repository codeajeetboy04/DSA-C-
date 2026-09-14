#include<iostream>
using namespace std;

int Binarysearch(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    
    int mid = s+(e-s)/2;

    while(s <= e){

        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;

    cout << "Index of 6 is " << Binarysearch(arr,n,6);

    return 0;
}