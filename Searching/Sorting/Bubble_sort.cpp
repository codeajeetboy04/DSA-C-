#include<iostream>
using namespace std;

void Bubblesort(int arr[],int n){
   
    for(int i=0;i<n-1;i++){
        bool swapped = false;

        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);

                swapped = true;
            }
        }
        if(swapped == false){
            //already sorted
            break;;
        }
    }
}
int main(){
    int arr[6] = {3,7,9,10,2,1};

    cout << "Unsorted Array: ";
    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    Bubblesort(arr,6);
    
    cout << "sorted Array: ";
    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}