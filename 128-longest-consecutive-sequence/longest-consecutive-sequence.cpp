class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        sort(nums.begin(),nums.end());
        int cnt=1,maxi=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==(nums[i-1]+1)||nums[i]==nums[i-1]){
                if(nums[i]==(nums[i-1]+1)){
                    cnt++;
                }
            }else{
                    cnt=1;
                }
           maxi=max(cnt,maxi);
        }
        return maxi;
    }
};