
#first approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    set<int> s1(nums.begin(),nums.end());
    nums=vector<int>(s1.begin(),s1.end());
    return s1.size();
    }
};

#second approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int j=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[j]=nums[i];
            j++;

#third apprach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>v2;
    for(auto i=nums.begin();i<nums.end();i++){
        if(binary_search(i+1,nums.end(),*i)==false)
        v2.push_back(*i);
    }
