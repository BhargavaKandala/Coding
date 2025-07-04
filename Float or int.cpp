#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    size_t dot_pos = s.find('.');

    if (dot_pos == string::npos) {
        cout << "int " << s << endl;
    } else {
        string int_part = s.substr(0, dot_pos);
        string dec_part = s.substr(dot_pos + 1);

        bool is_all_zeros = true;
        for (char c : dec_part) {
            if (c != '0') {
                is_all_zeros = false;
                break;
            }
        }

        if (is_all_zeros) {
            cout << "int " << int_part << endl;
        } else {
            cout << "float " << int_part << " 0." << dec_part << endl;
        }
    }
}
