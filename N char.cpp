#include <iostream>
using namespace std;

int main(){
    char x;
    cin >> x;
    if(x >= 'a' && x <= 'z'){
        x = x - 32;
    }
    else if (x >= 'A' && x <= 'Z'){
        x = x + 32;
    }
    cout << x << endl;
}