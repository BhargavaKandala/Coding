#include <iostream>
#include <string>
using namespace std;

int main() {
    while(true){
        int n, m;
        cin >> n >> m;

        if(n <= 0 || m <= 0){
            break;
        }

        int start = min(n ,m);
        int end = max(n ,m);

        long long int sum = 0;
            for(int i = start; i <= end; i++){
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum << endl;  
    }
}
