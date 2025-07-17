class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;int r=nums.size()-1;
        int pivot=0;
        while(l<r)
        {
          int mid=l+(r-l)/2;
          if(mid+1<nums.size() && nums[mid+1]<nums[mid])
          {
            pivot=mid;
            break;
          }else if(nums[mid]>nums[l])
          {
            l=mid+1;
          }else {
            r=mid;
          }
        }
        int i=0,j=pivot;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target)
            {
                return mid;
            }else if(nums[mid]>target)
            {
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        i=pivot+1; j=nums.size()-1;
         while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target)
            {
                return mid;
            }else if(nums[mid]>target)
            {
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return -1;
    }
};