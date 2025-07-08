class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int ele=(l+r)/2;
            if(nums[ele]==target)
            {
                return ele;
            }else if(nums[ele]<target){
                l++;
            }else{
                r--;
            }
        }
        return -1;
    }
};
