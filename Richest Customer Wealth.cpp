class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i=0;int j=0;
        int max=0;
        int  m=accounts.size(); int n = accounts[i].size();
        for(i=0;i<m;i++){
            int sum=0;
            for(j=0;j<n;j++){
                sum=sum+ accounts[i][j];
            }
            if(sum>max) {
                max=sum;
                }}
    return max;
            }
        
};
