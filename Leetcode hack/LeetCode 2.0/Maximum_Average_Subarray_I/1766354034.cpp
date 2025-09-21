class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

    int n = nums.size();

    int max_sum = 0;
    for(int i = 0; i < k; i++){
        max_sum += nums[i];
    }

    int window_sum = max_sum;
    for(int i = k; i < n; i++){
        window_sum += nums[i] - nums[i - k];
        max_sum = max(max_sum, window_sum);
    }

    return (double)max_sum / k;

    }
};