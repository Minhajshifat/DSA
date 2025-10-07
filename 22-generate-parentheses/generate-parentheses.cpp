class Solution {
public:
    void backtrack(int op,int cls,string &s,vector<string>&res,int n)
    {
        if(op==cls&&op==n)
        {
          res.push_back(s);
          return;
        }
        if(op<n)
        {
           s+='(';
           backtrack(op+1,cls,s,res,n);
           s.pop_back();
        }
        if(op>cls)
        {
           s+=')';
           backtrack(op,cls+1,s,res,n);
           s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string stack="";
        vector<string>res;
        backtrack(0,0,stack,res,n);
        return res;
    }
};
