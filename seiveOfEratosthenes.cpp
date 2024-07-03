//To compute number of prime numbers within range ----> (Seive of Eratosthenes)

#include<iostream>
using namespace std;

int primeNumbers() {
    int range;

    cout << "\nEnter the range: ";
    cin >> range;

    int prime[range] = {0};

    for(int i=2; i<=range; i++) {
        if(prime[i] == 0) {
            for(int j=i*i; j<=range; j+=i) {
                prime[j] = 1;
            }
        }
    }
    cout << "\nPrime numbers with " << range << " are: ";
    for(int i=2; i<=range; i++) {
        if(prime[i] == 0) {
          cout << i << " ";
        }
    }
    return -1;
}

int main() {
    primeNumbers();

    return 0;
}
 
