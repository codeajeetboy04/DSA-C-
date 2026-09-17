#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key){

    int s = 0;
    int e = n-1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastocc(int arr[],int n,int key){

    int s = 0;
    int e = n-1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main(){
    int arr[6] = {1,2,3,4,4,5};
    int n = 6;
    int key = 4;

    cout << "First occurance of 4 is at index " << firstocc(arr,n,key) << endl;

    cout << "Last occurance of 4 is at index " << lastocc(arr,n,key) << endl;

    return 0;
}