#include<iostream>
using namespace std;

int chocolateDistribution(int arr[], int packets, int students) {
    int temp;

    if(packets == 0 || students == 0) {
        return 0;
    }

    if(students > packets) {  //count of students MUST NOT be greater than packet count
        return -1;
    }

    for(int i=0; i<packets; i++) {
        for(int j=i+1; j<packets; j++) {
            if(arr[i] > arr[j]) {  //conventional swapping algo. to sort
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int minDiff = INT_MAX;

    for(int i=0; i+students-1 < packets; i++) {  //loop to evaluate min diff. iteratively
        int diff = arr[i+students-1] - arr[i];   //----> (NOTE the loop's limit)*

        if(diff < minDiff) {
            minDiff = diff;
        }
    }
    cout << "\nThe minimum difference of candies is: " << minDiff;
    return minDiff;
}

int main() {
    int arr[] = {9, 2, 23, 30, 40, 24, 48, 13};

    int packets = sizeof(arr) / sizeof(arr[0]);
    int students = 7;

    chocolateDistribution(arr, packets, students);

    return 0;
}
