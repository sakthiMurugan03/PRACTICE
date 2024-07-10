#include<iostream>
using namespace std;

int possibleWays(int num) { //computes all possible outcomes via recursion
    if(num == 0 || num == 1) {
        return num;
    }
    return possibleWays(num - 1) + possibleWays(num - 2);
}


int countWays(int count) {  //count funtion to tally the possible combinations recursively
    return possibleWays(count + 1);
}


int main() {
    int stairs, outcome;

    cout << "\nEnter the number of stairs: ";
    cin >> stairs;

    outcome = countWays(stairs);
    cout << "\nNumber of possible ways to climb are: " << outcome;

    return 0;
}
