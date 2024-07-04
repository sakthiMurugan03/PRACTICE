
#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int n) {
    int start = 0, end = n, mid;
    
    while(start <= end) {
        
        if(arr[mid] == key) {
            return mid;
        }
        
        if(arr[mid] > key) {
            end = mid - 1;
        }
        
        if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            cout << "\nSorry, key NOT present...";
        }
    }
    cout << "\nIndex of key is " << mid;
    return mid;
}

int main() {
    int arr[] = {-1, 3, 4, 5, 6, 7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    
    binarySearch(arr, key, n);
    
    return 0;
}

