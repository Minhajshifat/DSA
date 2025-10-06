#include<bits/stdc++.h>
class MinStack {
public:
    stack<int>st;
    stack<int>mini;
    MinStack() {
        
    }
    
    void push(int val) {
        if(mini.empty())
        {
            st.push(val);
            mini.push(val);
        }else{
            if(mini.top()>=val)
            {
                mini.push(val);
            }
            st.push(val);
        }
    }
    
    void pop() {
        if(st.top()==mini.top())
        {
            st.pop();
            mini.pop();
        }else{
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
