#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        for (int i = n.length() - 1; i >= 0; i--) {
            cout << n[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
