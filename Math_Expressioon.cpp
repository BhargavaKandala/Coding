#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    string s,q;
    cin >> a >> s >> b >> q >> c;

    if(s == "+" && (a + b == c))cout << "Yes" << endl;
    else if(s == "-" && (a - b == c))cout << "Yes" << endl;
    else if(s == "*" && (a * b == c))cout << "Yes" << endl;
    else {
        if(s == "+")cout << a + b << endl;
        else if(s == "-")cout << a - b << endl;
        else if(s == "*") cout << a * b << endl;
    }
}