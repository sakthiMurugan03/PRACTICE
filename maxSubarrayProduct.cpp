//C++ program to compute Maximum Subarray Product using Kadane's Algorithm

#include<bits/stdc++.h>

class Solution {
    public:

        int maximumSubarrayProduct(int arr[], int n) {
            int positiveMax = arr[0];
            int negativeMin = arr[0];

            int currMax = arr[0];

            for(int i=0; i<n; i++) {
                positiveMax = max({arr[i], arr[i] * positiveMax, arr[i] * negativeMin});
                negativeMin = min({arr[i], arr[i] * positiveMax, arr[i] * negativeMin});

                currMax = max(currMax, positiveMax);
            }
        cout << "\nThe maximum subarray product is: " << currMax;

        return currMax;
    } 
};

int main() {
    int arr[] = {-1, 2, 6, -9, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution s;
    s.maximumSubarrayProduct(arr, n);

    return 0;
}
