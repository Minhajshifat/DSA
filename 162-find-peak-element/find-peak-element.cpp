class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int n=nums.size();
        if(nums.size()>1)
        {
            while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(mid>0 && mid<n-1)
            {
                if(nums[mid]>nums[mid-1]&& nums[mid]>nums[mid+1])
                {
                    return mid;
                }else if(nums[mid]<nums[mid-1])
                {
                    r=mid-1;
                }else {
                    l=mid+1;
                }
            }else if(mid==0){
                if(nums[0]>nums[1])
                {
                  return mid;
                }else{
                    return 1;
                }
            }else if(mid==n-1) {
                if(nums[n-1]>nums[n-2])
                {
                    return n-1;
                }else{
                    return n-2;
                }
            }

        }

        }
        
        return 0;
    }
};