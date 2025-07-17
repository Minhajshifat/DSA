class Solution {
public:
    int findMin(vector<int>& nums) {
        int pivot=0;
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(mid+1<nums.size()&&nums[mid]>nums[mid+1])
            {
                return nums[mid+1];
            }else if(nums[mid]>nums[l]){
               l=mid+1;
            }else{
                r=mid;
            }

            
        }
return nums[0];
    }
};