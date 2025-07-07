#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int res = 1;
        for(int i = 1; i <= n; i++){
            res *= i;
        }
        cout << res << endl;
    }
}