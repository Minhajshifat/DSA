class Solution {
public:
bool action(vector<int>&nums,int mid,int res)
{
    int cnt=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<=mid){
            cnt++;
        }else{
            cnt+=2;
        }
    }
    cout<<cnt<<" "<<mid<<res<<endl;
    return cnt;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
       int l=1;
       int r=*max_element(nums.begin(),nums.end());
       int ans=r;
       while(l<=r)
       {
        int mid=(l+r)/2;
         long long sum=0;
            for(int i=0; i<nums.size(); i++){
                sum += (nums[i] + mid - 1) / mid;
            }
        if(sum>threshold)
        {
          l=mid+1;
        }else{
            r=mid-1;
        }
             }
        return l;
    }

};