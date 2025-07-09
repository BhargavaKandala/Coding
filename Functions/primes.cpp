#include <iostream>
using namespace std;

void primes(int n) {
    bool first = true;
    for (int i = 2; i <= n; i++) {
        int fc = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) fc++;
        }
        if (fc == 2) {
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
    }
}

int main() {
    int n;
    cin >> n;
    primes(n);
}
