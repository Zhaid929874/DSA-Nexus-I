#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter Input:";

    string s;
    cin>>s;

    stack<char> st;
    for(char c:s)
    {
        st.push(c);
    }

    while(st.empty()==false)
    {
        cout<<st.top();
        st.pop();
    }

    return 0;
}
