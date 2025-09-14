class Solution {
public:
    int fib(int n) {
        int first =0,second =1,sum = 0;

        for (int i = 0; i <= n-1; i++){
            first = second;
            second = sum;
            sum = first + second;
        }
        return sum;
    }
};