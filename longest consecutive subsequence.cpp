class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=0;
        int max=0;
        for(int i=0;i<n;i++){
            if(nums[i]+1==nums[i+1]){
            c++;
            }
            if(c>max){
            max=c;
            }
            else
            c=0;
        }
    return max+1; 
        }  
};
