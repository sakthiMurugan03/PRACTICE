//To compute maximum profit in buying & selling stock ONCE --------> (DP)

#include<iostream>
#include<vector>

using namespace std;

int maximumProfit(vector <int> stocks) {
    int minValue = stocks[0];
    int maxProfit = 0;
    int limit = stocks.size();

    for(int i=0; i<limit; i++) {
        int cost = stocks[i] - minValue;
        maxProfit = max(maxProfit, cost);

        minValue = min(minValue, stocks[i]);
    }
    cout << "\nThe maximum profit is: " << maxProfit;

    return maxProfit;
}

int main() {
    vector <int> arr;

    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(0);
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(6);

    maximumProfit(arr);

    return 0;
}
