//Program to measure the amount of trapped rain water

#include<iostream>
using namespace std;

int trappingRainWater(int arr[], int n) {
    int left[n], right[n];  //initialization of left & right arrays

    left[0] = arr[0];
    for(int i=0; i<n; i++) {
        left[i] = max(left[i-1], arr[i]);  //computes largest value from leftmost array
    }

    right[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--) {
        right[i] = max(right[i+1], arr[i]);  //computes largest value from rightmost array
    }

    int res = 0;

    for(int i=0; i<n; i++) {
        res += min(left[i], right[i]) - arr[i];  //formula to measure the trapped water
    }

    cout << "\nThe amount of trapped water is: " << res;

    return res;
}

int main() {
    int arr[] = {3, 1, 0, 4, 2, 5, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    trappingRainWater(arr, n);

    return 0;
}
