#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < 5; i++)
    {
        pq.push(v[i]);
    }
    int result = 0;
    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int c = a + b;
        result += c;
        pq.push(c);
    }
    cout << result << endl;

    return 0;
}
