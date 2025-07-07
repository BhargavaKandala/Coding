#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    int years = n / 365;
    int remaining_after_years = n % 365;

    int months = remaining_after_years / 30;
    int days = remaining_after_years % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
