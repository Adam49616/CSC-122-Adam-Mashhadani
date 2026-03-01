#include "Factorizer.h"

std::vector<int> Factorizer::getPrimeFactors(int n) {
    std::vector<int> factors;

    if (n <= 1)
        return factors;

    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 1)
        factors.push_back(n);

    return factors;
}