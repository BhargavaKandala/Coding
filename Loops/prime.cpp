#include <iostream>
using namespace std;

int main(){
    int n;
    bool isPrime = true;
    cin >> n;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime)cout << "YES" << endl;
    else cout << "NO" << endl;
}