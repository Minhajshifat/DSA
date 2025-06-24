vector<int>dp(50);
class Solution {
public:
     int solve(int ind,int n){
        if(ind==n){
            return 1;
        }
        if(ind>n){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int road1=solve(ind+1,n);
        int road2=solve(ind+2,n);
        int result=road1+road2;
        dp[ind]=result;
        return result;
     }
    int climbStairs(int n) {
       for(int i=0;i<50;i++){
        dp[i]=-1;
       }
       int ans=solve(0,n);
      return ans;
    }
};