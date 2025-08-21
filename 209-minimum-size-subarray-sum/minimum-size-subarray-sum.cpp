class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,sum=0;
        int len=nums.size()+5;
        for(r=0;r<nums.size();r++)
        {
            sum+=nums[r];
            while(sum>=target && l<=r)
            {
                len=min(len,r-l+1);
                sum=sum-nums[l];
                l++;
            }
        }
        if(len<=nums.size())
        {
            return len;
        }
        cout<<len<<endl;
        return 0;

        
    }
    
};