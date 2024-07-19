class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) {
            return 0; 
        }

        sort(nums.begin(), nums.end());

        int G = 0;

        for (int i = 1; i < nums.size(); i++) {
            int G = nums[i] - nums[i - 1];
            maxGap = max(maxGap, G);
        }

        return maxGap;
    }
};
