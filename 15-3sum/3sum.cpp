class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        

        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0&&i!=j && j!=k&&k!=i)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }else if(sum<0){
                    j++;
                }else{
                    k--;
                }
            }
            
        }
        vector<vector<int>>v;
        for(auto i:s)
        {
            v.push_back(i);
        }
       return v;
        

    }
};