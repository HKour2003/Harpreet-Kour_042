class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1 = 0, current = 0;
        for (int num : nums) {
            if (num == 1) {
                current++;
                max1 = max(max1, current);
            } else {
                current = 0;
            }
        }
        return max1;
    }
};
