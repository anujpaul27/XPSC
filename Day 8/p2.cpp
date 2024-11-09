/*
Solver  : Anuj Paul
link    : https://codeforces.com/problemset/problem/1165/B
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{

    int n;
    cin>>n;

    multiset<int> ms;

    for (int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        ms.insert(val);
    }

    for (int i=1; i<=n; i++)
    {        
        auto it = ms.lower_bound(i);
        if (it != ms.end())
        {
            ms.erase(it);
        }
        
    }

    cout<<n-ms.size()<<endl;    



    return 0;
}