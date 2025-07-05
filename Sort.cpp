#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int x = a, y = b, z = c;

    int arr[3] = {a, b, c};
    sort(arr, arr + 3);

    for(int i = 0; i < 3; i++)
        cout << arr[i] << endl;
    cout << endl;
    cout << x << endl << y << endl << z << endl;
}
