//Program to print the largest & smallest element from an array

#include<iostream>
using namespace std;

int maximumElement(int arr[], int n) {
    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "\nLargest element in array is: " << max;
    cout << "\nSmallest element in array is: " << min;
    return max;
}

int main() {
    int arr[] = {4, -5, 89, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    maximumElement(arr, n);
    return 0;
}

