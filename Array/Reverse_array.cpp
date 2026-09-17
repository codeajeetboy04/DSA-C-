#include<iostream>
using namespace std;

void reversearray(int arr[],int n){

    int s = 0;
    int e = n-1;

    while(s <= e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    reversearray(arr,n);

    cout << "Array reverse: ";
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}