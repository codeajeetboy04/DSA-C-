#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    
    int pivot = arr[s];
    int cnt = 0;
    
    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    
    //place pivot at right position
    int pivotindex = s+cnt;
    swap(arr[pivotindex],arr[s]);

    //left and right wala part sambhal lete hai
    int i=s,j=e;

    while(i < pivotindex && j > pivotindex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotindex && j > pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e){
    //base case
    if(s >= e){
        return ;
    }

    //partition
    int p = partition(arr,s,e);

    //left part sort karo
    quicksort(arr,s,p-1);

    //right part sort karo
    quicksort(arr,p+1,e);
}
int main(){

    int arr[6] = {2,4,6,9,1,5};
    int n = 6;

    cout << "Unsorted Array: ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr,0,n-1);

    cout << "Sorted array: ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}