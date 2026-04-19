#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(char c:s)
    {
        if(c=='('||c=='{'||c=='[')
        {
            st.push(c);
        }
        else
        {
            if(st.empty()==true)
            {
                cout<<"Invalid";
                return 0;
            }
            else if(c==')'&& st.top()=='(')
            {
                st.pop();
            }
            else if(c=='}'&& st.top()=='{')
            {
                st.pop();
            }
            else if(c==']'&& st.top()=='[')
            {
                st.pop();
            }
            else
            {
                cout<<"Invalid";
                return 0;
            }

        }
    }
    if(st.empty())
    {
        cout<<"Valid";
    }
    else
    {
        cout<<"Invalid";
    }

    return 0;
}
