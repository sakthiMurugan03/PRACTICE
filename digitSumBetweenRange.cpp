#include<iostream>
using namespace std;

int betweenSum(int num1, int num2) {
    int sum = 0, lastDigit;

    for(int i=num1; i<=num2; i++) {
        if(i <= 9) {
            sum += i;
        }
        else {
            int num = i;

            while(num != 0) {
                lastDigit = num % 10;
                sum += lastDigit;
                num /= 10;
            }
        }
    }
    cout << "\nThe sum between " << num1 << " and " << num2 << " is: " << sum;
    return sum;
}

int main() {
    betweenSum(5, 11);
    return 0;
}
