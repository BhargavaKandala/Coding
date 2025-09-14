class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int leftSum = 0;
        int n = colors.size();
        int count = 0;

        for(int i = 0; i < n; i++){
            int left = colors[(i - 1 + n) % n];
            int middle = colors[i];
            int right = colors[(i + 1) % n];

            if(left != middle && middle != right){
                count ++;
            }
        }

        return count;
    }
};