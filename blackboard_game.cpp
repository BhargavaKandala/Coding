#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 4 == 0) c0++;
            else if (i % 4 == 1) c1++;
            else if (i % 4 == 2) c2++;
            else c3++;
        }

        int pairs = min(c0, c3) + min(c1, c2);
        if (pairs * 2 < n) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
