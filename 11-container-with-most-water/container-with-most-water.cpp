class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size()-1;
        int l=0,r=n;
        int maxi=0;
        while(n>0)
        {
            int area=(n)*min(height[l],height[r]);
            maxi=max(maxi,area);
            //cout<<n<<maxi<<" "<<l<<r<<endl;
            if(height[l]<height[r])
            {
                l++;
                n--;
            }else{
                r--;
                n--;           
            }           
        }
       return maxi;
    }

};