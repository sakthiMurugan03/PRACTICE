#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int *arr, size, top = -1;

bool isFull() {
    if(top == (size - 1)) {
        printf("\nStack overflow..!");
        printf(" and no further element can be appended further");
        return true;
    }
    else {
        printf("\nGreat..!,stack is NOT full...");
        return false;
    }
}

bool isEmpty() {
    if(top == -1) {
        printf("\nStack underflow..!");
        return true;
    }
    else {
        printf("\nStack is NOT empty...");
        return false;
    }
}

void push() {
    int num;
    
    if(isFull() == true) {
        printf("\nSorry, stack is already pre-occupied..!");
    }
    else {
        printf("\n\nEnter the element to be appended: ");
        scanf("%d", &num);
        top++;
        
        arr[top] = num;
        
        printf("\nElement successfully inserted on top..!");
    }
}

void pop() {
    int poppedEle;
    
    if(isEmpty() == true) {
        printf("\nNo element left to be popped..!");
    }
    else {
        poppedEle = arr[top];
        top--;
        printf("\nThe popped element from stack is: %d", poppedEle);
    }
}

void display() {
    printf("\nThe contents in stack are: ");
    
    for(int i=0; i<=top; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int choice, reply;
    //char reply[100];
    
    printf("\nEnter the size of stack: ");
    scanf("%d", &size);
    
    arr = (int*) malloc(size * sizeof(int));
    
    do {
        printf("\nEnter 1 to PUSH, 2 to POP, or 3 to DISPLAY: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                push();
                break;
                
            case 2:
                pop();
                break;
                
            case 3:
                display();
                break;
                
            default:
                printf("\nInvalid entry..!");
                break;
        }
        
        printf("\nWould you like to continue? (0/1): ");
        scanf("%d", &reply);
    }while(reply == 1);
    
    return 0;
}
