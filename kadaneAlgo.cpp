//Maximum Subarray Sum -------> (Kadane's Algorithm)

#include<iostream>
using namespace std;

int kadaneAlgo(int arr[], int n) {
    int currSum = 0;
    int maxSum = arr[0];

    for(int i=0; i<n; i++) {
        currSum += arr[i];

        if(currSum < 0) {
            currSum = 0;
        }

        if(currSum > maxSum) {
            maxSum = currSum;
        }
    }
    cout << "\nThe maximum subarray sum is: " << maxSum;
    return maxSum;
}

int main() {
    int arr[] = {-1, 2, 4, 5, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    kadaneAlgo(arr, n);

    return 0;
}

