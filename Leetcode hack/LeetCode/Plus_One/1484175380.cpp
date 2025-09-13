class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i] += 1; // Increment if no carry is needed
                return digits;
            }
            digits[i] = 0; // Set current digit to 0 and continue for carry
        }
        // If we exit the loop, it means all digits were 9, so we need a new leading 1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
