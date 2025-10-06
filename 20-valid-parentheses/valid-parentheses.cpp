class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto i:s)
        {
           // cout<<i<<" "<<st.top()<<endl;
            if(i=='('||i=='{'||i=='[')
            {
                cout<<"pushing"<<endl;
                st.push(i);
                cout<<st.top()<<endl;
            }else{
                cout<<i<<endl;
                if(!st.empty())
                {
                    if(i==']'&&st.top()=='[')
                    {
                        st.pop();
                    }else if(i=='}'&&st.top()=='{')
                    {
                        st.pop();
                    }else if(i==')'&&st.top()=='(')
                    {
                        st.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }else{
            return false;
        }
    }
};
