#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> sheep_positions;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '*') {
                sheep_positions.push_back(i);
            }
        }

        int k = sheep_positions.size();
        if (k == 0) {
            cout << 0 << '\n';
            continue;
        }

        int median_idx = k / 2;
        int median_pos = sheep_positions[median_idx];

        long long moves = 0;
        for (int i = 0; i < k; ++i) {
            moves += abs(sheep_positions[i] - (median_pos - (median_idx - i)));
        }

        cout << moves << '\n';
    }
    return 0;
}