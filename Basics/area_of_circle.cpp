#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    cin >> r;

    const double pi = 3.141592653589793;
    double area = r * r * pi;

    cout << fixed << setprecision(7) << area << endl;
    return 0;
}
