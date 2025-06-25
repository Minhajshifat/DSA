class Solution {
public:
     int dp[105];
    int solve(int ind,vector<int>&nums)
    {
        if(ind>=nums.size()){
            return 0;
        
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int res1=nums[ind]+solve(ind+2,nums);
        int res2=solve(ind+1,nums);
        int result=max(res1,res2);
        dp[ind]=result;
        return result;
    }
    int rob(vector<int>& nums) {
        for(int i=0;i<105;i++){
            dp[i]=-1;
        }
        int result=solve(0,nums);
        return result;
    }
};