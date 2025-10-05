class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto i:tokens)
        {
            if(i=="+"||i=="-"||i=="*"||i=="/")
            {
                if(!st.empty())
                {
                    int n1=st.top();
                    st.pop();
                    int n2=st.top();
                    st.pop();
                    if(i=="+")
                    {
                        st.push(n2+n1);
                    }else if(i=="-")
                    {
                        st.push(n2-n1);
                    }else if(i=="*")
                    {
                        st.push(n2*n1);
                    }else{
                        st.push(n2/n1);
                    }
                }
            }else{
                    int num=stoi(i);
                    st.push(num);
                }
        }
        return st.top();
    }
};