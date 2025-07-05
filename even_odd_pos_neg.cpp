#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x, pos = 0, neg = 0,ec = 0, oc = 0;
    for(int j = 0; j < n; j++){
        cin >> x;
        
        if(x % 2 == 0)ec++;
        else oc++;  

        if(x > 0)pos++;
        else if(x < 0)neg++;
    }
    cout << "Even: " << ec << endl;
    cout << "Odd: " << oc << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

}