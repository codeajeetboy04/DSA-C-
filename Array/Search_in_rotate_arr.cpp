#include<iostream>
using namespace std;

int search(int arr[],int n,int tar){

    int st = 0;
    int end = n-1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(arr[mid] == tar){
            return mid;
        }
        
        //left part sorted
        if(arr[st] <= arr[mid]){
            if(arr[st] <= tar && tar <= arr[mid]){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        else{
            //right part sorted
            if(arr[mid] <= tar && tar <= arr[end]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[7] = {4,5,6,7,0,1,2};
    int n = 7;
    int tar = 0;

    cout << search(arr,n,tar) << endl;

    return 0;
}