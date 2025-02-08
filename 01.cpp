#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int nextPrime(int num) {
    num++;
    while (!isPrime(num)) {
        num++;
    }
    return num;
}

void findFactors(int num) {
    cout << "Factors of " << num << ": ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
        cout << "Next prime number: " << nextPrime(n) << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        findFactors(n);
    }

    return 0;
}
