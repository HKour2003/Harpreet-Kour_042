
//You are given an array of integers 'ARR' of length 'N' and an integer Target. Your task is to return all pairs of elements such that they add up to Target.
//We cannot use the element at a given index twice.


#include<algorithm>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
sort(arr.begin(),arr.end());
vector<pair<int,int> >ob;
int start=0,end=n-1;
while(start<end){
	if(arr[start]+arr[end]==target){
      ob.push_back(make_pair(arr[start], arr[end]));
      start++;
      end--;
	}
	else if(arr[start]+arr[end]>target){
      end--;
        } else if (arr[start] + arr[end] < target) {
      start++;
        }
}
if (ob.empty()) {
        ob.push_back(make_pair(-1, -1));
}

return ob;
}
