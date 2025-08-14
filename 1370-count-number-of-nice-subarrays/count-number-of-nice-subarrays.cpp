class Solution {
public:
    int get_result(vector<int>&nums,int k)
    {
        int i=0,j=0;
        int cnt=0,ans=0;
        for(j=0;j<nums.size();j++)
        {
            if(nums[j]%2!=0)
            {
                cnt++;
               
            }
             while(cnt>k)
            {
                //cout<<j<<" "<<nums[j]<<" "<<nums[i]<<endl;
                if(nums[i]%2!=0)
                {
                   cnt=cnt-1;
                   
                }
                i++;
                
            }
            ans+=(j-i)+1;
            //cout<<ans<<" ";
            
            
        }
        cout<<ans<<endl;
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans=get_result(nums,k)-get_result(nums,k-1);
        return ans;
    }
};