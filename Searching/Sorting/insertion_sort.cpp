#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
    
    for(int i=1;i<n;i++){

        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j] > temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        //copy temp value
        arr[j+1] = temp;
    }
}
int main(){
    int arr[7] = {10,1,7,4,8,2,11};

    cout << "Unsorted Array: ";
    for(int i=0;i<7;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionsort(arr,7);

    cout << "Sorted Array: ";
    for(int i=0;i<7;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}