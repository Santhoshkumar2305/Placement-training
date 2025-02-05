#include <iostream>
using namespace std;

void factors(int n) {
    cout << "Factors of " << n << " are:" << endl;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            if (i*i != n) {
                cout << n / i << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    factors(n);
    return 0;
}
