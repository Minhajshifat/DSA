class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(mid%2==1)
            {
                mid=mid-1;
            }
            if(nums[mid]!=nums[mid+1])
            {
                r=mid;
            }else{
                l=mid+2;
            }
        }
        return nums[l];
    }
};