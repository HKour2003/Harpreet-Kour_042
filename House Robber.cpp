class Solution {

public:

    int rob(vector<int>& nums) {

    vector<int> ho(nums.size() + 1, -1);

m[0] = 0;

m[1] = nums[0];

    for(int i =2 ;i<= nums.size();i++)

    {

        m[i] = max(nums[i - 1] + m[i - 2], m[i - 1]); 

    }




 return m[nums.size()];

  
    }

};
