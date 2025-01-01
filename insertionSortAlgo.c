#include<stdio.h>

int main() {
    int arrCount;
    printf("\nEnter the number of array elements: ");
    scanf("%d", &arrCount);
    
    int arr[arrCount];
    
    printf("\nEnter the array elements: ");
    for(int i=0; i<arrCount; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i=1; i<arrCount; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
    printf("\nThe sorted array is: ");
    for(int i=0; i<arrCount; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
