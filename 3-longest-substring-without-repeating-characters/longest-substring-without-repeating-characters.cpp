class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
            int cnt=0;
            map<char,bool>mp;
            for(int j=i;j<s.size();j++)
            {
                if(mp[s[j]]==1){
                    break;
                }else{
                    mp[s[j]]=1;
                    cnt++;
                }
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};