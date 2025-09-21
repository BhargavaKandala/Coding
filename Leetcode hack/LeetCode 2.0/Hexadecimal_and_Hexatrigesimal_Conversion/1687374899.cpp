class Solution {
public:
    string toBase(int num, int base) {
        const string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        if (num == 0) return "0";
        
        string result;
        while (num > 0) {
            result += digits[num % base];
            num /= base;
        }
        reverse(result.begin(), result.end());
        return result;
    }

    string concatHex36(int n) {
        int n2 = n * n;
        int n3 = n * n * n;

        string hex = toBase(n2, 16);    
        string base36 = toBase(n3, 36); 

        return hex + base36;
    }
};