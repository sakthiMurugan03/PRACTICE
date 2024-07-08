#include<iostream>
using namespace std;

int nthLargestElement(int arr[], int n) {
    int choice = 1;

    cout << "\nEnter the nth largest value: ";
    cin >> choice;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    cout << "\nSorted array: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int i=0; i<n; i++) {
        if(arr[i] == arr[choice]) {
            if(choice == 1) {
                cout << choice << "st largest element is " << arr[i-1] << endl;
            }
            else if(choice == 2) {
                cout << choice << "nd largest element is " << arr[i-1] << endl;
            }
            else if(choice == 3) {
                cout << choice << "rd largest element is " << arr[i-1] << endl;
            }
            else {
                cout << choice << "th largest element is " << arr[i-1] << endl;
            }
        }
    }
    return choice;
}

int main() {
    int arr[] = {2, 9, 21, 0, -9, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    nthLargestElement(arr, n);
    return 0;
}

