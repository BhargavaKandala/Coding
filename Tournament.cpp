#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, j, k;
        cin >> n >> j >> k;

        vector<int>arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int strength_j = arr[j - 1];
        int stronger = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > strength_j) {
                stronger++;
            }
        }

        if(stronger <= n - k){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}