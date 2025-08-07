class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,zo=0,res=0;
        for(j=0;j<nums.size();j++)
        {
            if(nums[j]==0)
            {
             zo++;
            }
            while(zo>k)
            {
            if(nums[i]==0)
                {
                  zo--;
                  
                }
            i++; 
            }
            res=max(res,(j-i)+1);
            
        }
        return res;
    }
};