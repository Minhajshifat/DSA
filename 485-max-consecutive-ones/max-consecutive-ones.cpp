class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0,cnt=0;
        if(nums.size()==1&&nums[0]==0)
        {
            return 0;
        }
        for(int i=0;i<nums.size();i++)
        {
              if(nums[i]!=1)
              {
                cnt=0;
              }else{
                cnt++;
              }
              maxi=max(cnt,maxi);
        }
        return maxi;
    }
};