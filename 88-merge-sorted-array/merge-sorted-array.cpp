class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)
        {
            return;
        }

        int s=m+n-1,j=n-1,i=m-1;
        while(i>=0&&j>=0)
        {
            if(nums2[j]>nums1[i]){
                nums1[s]=nums2[j];
               j--;
               s--;
            }else{
                nums1[s]=nums1[i];
                i--;
                s--;
            }

        }
        while(i>=0){
            nums1[s]=nums1[i];
            i--;
            s--;
        }
        while(j>=0){
            nums1[s]=nums2[j];
            j--;
            s--;
        }
    }
};