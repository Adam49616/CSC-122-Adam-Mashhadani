/*
Adam Mashhadani
3/1/2026
Project: Well That's Just Prime Lab
*/

#include <iostream>
#include "Factorizer.h"
using namespace std;

int main() {
    Factorizer f;
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    vector<int> factors = f.getPrimeFactors(num);

    if (factors.empty()) {
        cout << "No prime factors." << endl;
    }
    else {
        cout << "Prime factors: ";
        for (int x : factors)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
