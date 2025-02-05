#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findPrimesUpTo(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}

void findPrimesInRange(long long L, long long R) {
    long long sqrtR = sqrt(R);
    vector<int> primes = findPrimesUpTo(sqrtR);
    vector<bool> isPrime(R - L + 1, true);

    for (int prime : primes) {
        for (long long j = prime*prime; j <= R; j += prime) {
            isPrime[j - L] = false;
        }
    }

    if (L == 1) isPrime[0] = false;

    for (long long i = 0; i <= R - L; i++) {
        if (isPrime[i]){
            cout << (L + i) << " ";
        } 
    }
    cout << endl;
}

int main() {
    long long L, R;
    cout << "Enter the range: ";
    cin >> L >> R;

    cout << "Primes in the range [" << L << ", " << R << "]: ";
    findPrimesInRange(L, R);

    return 0;
}
