class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
       unordered_map<char,int>count;
       int i=0;
       for(int j=0;j<s.size();j++)
       {
        char a=s[j];
        count[a]=count[a]+1;
        while(count[a]>1)
        {
            char left=s[i];
            count[left]=count[left]-1;
            i++;
             cout<<j<<" "<<i<<endl;
        }
       
        maxi=max(maxi,j-i+1);
       }
        return maxi;
    }
};