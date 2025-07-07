#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, sum = 0;
        cin >> x >> y;
        int start = min(x, y);
        int end = max(x, y);

        for(int i = start+1; i < end; i++){
            if(i % 2 == 1){
                sum += i;
            }
        }
        cout << sum << endl;
    }
}