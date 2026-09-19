#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    
    //base case
    if(n == 0 || n == 1){
        return ;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursion call
    bubblesort(arr,n-1);

}
int main(){

    int arr[6] = {3,5,1,2,10,4};
    int n = 6;

    bubblesort(arr,n);

    cout << "sorted array: ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}