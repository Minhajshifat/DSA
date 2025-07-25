// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int strt=1; int end=n;
        int ans=-1;
        while(strt<=end)
        {
            int mid=strt+(end-strt)/2;
            if(isBadVersion(mid))
            {
                ans=mid;
                end=mid-1;
            }else{
                strt=mid+1;
            }
        }
        return ans;
    }
};