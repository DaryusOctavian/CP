#include <bits/stdc++.h>

using namespace std;

// Iterative Function to calculate (x^y) % p in O(log y)
unsigned long long power(unsigned long long x, long long y, long long p) {
    unsigned long long res = 1;  // Initialize result

    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1;  // y = y/2
        x = (x * x) % p;
    }
    return res;
}

// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n, long long p) {
    return power(n, p - 2, p);
}

// Returns nCr % p using Fermat's little theorem.
unsigned long long nCrModPFermat(unsigned long long n, long long r, long long p) {
    // If n<r, then nCr should return 0
    // Base case
    if (r == 0)
        return 1;

    // Fill factorial array so that we can find all factorial of r, n and n-r
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;

    long long ncr = (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
    return ncr;
}

// Driver program
int main() {
    // p must be a prime greater than n.
    int n = 41, r = 27, p = 139;
    cout << "Value of nCr % p is "
         << nCrModPFermat(n, r, p);
    return 0;
}