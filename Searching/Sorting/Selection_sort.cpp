#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int minidx = i;
        
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minidx]){
                minidx = j;
            }
        }
        swap(arr[minidx],arr[i]);
    }
}
int main(){
    int arr[7] = {10,4,1,2,8,3,9};

    cout << "Unsorted Array: " ;
    for(int i=0;i<7;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionsort(arr,7);

    cout << "Sorted Array: " ;
    for(int i=0;i<7;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}