#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool mila = false;
    for(int i = 2; i <= n; i += 2){
            cout << i << endl;
            mila = true;
    }
    if(!mila)cout << "-1"<< endl;
    return 0;
}