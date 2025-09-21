class Solution {
public:
    bool isPalindrome(int x) {

        long long int rev = 0, remain, temp = x;
        if(x < 0){
            return false;
        }

        while(temp != 0){
            remain = temp % 10;
            rev = rev * 10 + remain;
            temp = temp / 10; 
        }
        return (rev == x);
    }
};