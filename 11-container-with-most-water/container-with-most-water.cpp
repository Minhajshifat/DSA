class Solution {
public:
    int maxArea(vector<int>& heights) {
        int sz=0;
        int i=0,j=heights.size()-1;
        while(i<j)
        {
            int res=min(heights[i],heights[j])*(j-i);
            sz=max(sz,res);
            if(heights[j]>=heights[i])
            {
                i++;
            }else{
                j--;
            }
        }
        return sz;
        
    }
};
