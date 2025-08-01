class Solution {
public:
    bool ck(vector<int>&bloomDay,int mid,int k,int m)
    {
        int cnt=0,bug=0;
        for(int i=0;i<bloomDay.size();i++)
        {
        if(bloomDay[i]<=mid){
            cnt++;
          }else{
            cnt=0;
          }
          if(cnt==k)
          {
            cnt=0;
            bug++;
          }
          //cout<<bug<<" ";
        
        }
        bug+=(cnt/k);
        cout<<bug<<" ";
        return bug>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
         int ans=-1;
        
        int l=*min_element(bloomDay.begin(),bloomDay.end()),r=*max_element(bloomDay.begin(),bloomDay.end());
        while(l<=r)
        {
            int mid=(l+r)/2;
            //cout<<mid<<" ";
            bool cnt=ck(bloomDay,mid,k,m);
            cout<<endl;
            if(cnt)
            {
                //cout<<"ok"<<endl;
                ans=mid;
                r=mid-1;
            }else
            {
                l=mid+1;
            }

        }
        return ans;




    }
};