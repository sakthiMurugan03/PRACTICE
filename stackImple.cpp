#include<iostream>
using namespace std;

class stack {
    private:
    int *arr, top, n;

    public:
    stack() {
        cout << "\nEnter the number of elements: ";
        cin >> n;

        arr = new int[n];

        cout << "\nEnter the stack elements: ";
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        top = -1; //initializing top pointer to (-ve) one 
    }

    void push() {
        int num;

        if(top == n-1) {
            cout << "\nStack overflow..!";
        }

        cout << "\nEnter the number to be appended: ";
        cin >> num;

        top++;
        arr[top] = num;

        cout << "\nAppended element is: " << arr[top];

        cout << "\nNew stack is: ";
        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
    }

    void pop() {
        if(top == -1) {
            cout << "\nStack underflow...";
        }
        top--;

        cout << "\nElement successfully popped..!";
    }

    bool emptyCheck() {
        if(top == -1) {
            cout << "\nYes, the stack is empty";
        }
        else {
            cout << "\nNo, stack is NOT empty";
        }
        return true;
    }
};

int main() {
    int ch;
    string reply;

    stack s;

    do {
        cout << "\nEnter 1 to PUSH, 2 to POP, or 3 to check EMPTY: ";
        cin >> ch;

        switch(ch) {
            case 1:
                s.push();
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.emptyCheck();
                break;

            default:
                cout << "\nSorry, invalid input...";
                break;
        }

        cout << "\n\nWould you like to continue? (yes/no): ";
        cin >> reply;
    }while(reply == "yes" || reply == "y");

    return 0;
}

