#include <iostream>
using namespace std;

void merge(int arr[], int s, int e) {

    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values into first array
    int k = s;

    for(int i = 0; i < len1; i++) {
        first[i] = arr[k++];
    }

    // Copy values into second array
    k = mid + 1;

    for(int i = 0; i < len2; i++) {
        second[i] = arr[k++];
    }

    // Merge two sorted arrays
    int i = 0;
    int j = 0;
    k = s;

    while(i < len1 && j < len2) {

        if(first[i] <= second[j]) {
            arr[k++] = first[i++];
        }
        else {
            arr[k++] = second[j++];
        }
    }

    // Copy remaining elements of first
    while(i < len1) {
        arr[k++] = first[i++];
    }

    // Copy remaining elements of second
    while(j < len2) {
        arr[k++] = second[j++];
    }
    
    delete[] first;
    delete[] second;
}

void mergesort(int arr[], int s, int e) {

    // Base case
    if(s >= e) {
        return;
    }

    int mid = s + (e - s) / 2;

    // Left part sort
    mergesort(arr, s, mid);

    // Right part sort
    mergesort(arr, mid + 1, e);

    // Merge
    merge(arr, s, e);
}

int main() {

    int arr[8] = {3, 7, 0, 1, 5, 8, 3, 2};
    int n = 8;

    cout << "Unsorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergesort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}