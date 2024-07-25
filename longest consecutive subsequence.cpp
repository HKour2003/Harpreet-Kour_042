class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;
        else if(nums.size()==1)
            return 1;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=0;
        int max=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])
                continue;
            else if(nums[i]+1==nums[i+1]){
            c++;
            if(c>max){
            max=c;
            }
            }
            else
            c=0;
        }
    return max+1; 
        }  
};
