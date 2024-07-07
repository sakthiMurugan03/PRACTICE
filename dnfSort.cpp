#include<iostream>
using namespace std;

int dnfSort(int arr[], int n) {
    int low = 0, high = n-1, mid = 0;

    while(mid <= high) {

        if(arr[mid] == 0) {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            low++;
            mid++;
        }

        else if(arr[mid] == 1) {
            mid++;
        }

        else if(arr[mid] == 2) {
            int temp2 = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp2;

            high--;
        }
    }

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return -1;
}


int main() {
    int arr[] = {2, 2, 0, 1, 0, 2, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    dnfSort(arr, n);
    return 0;
}
