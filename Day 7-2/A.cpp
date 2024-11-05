/*
Solver: Anuj Paul
link: https://vjudge.net/contest/669017#problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{

    int n,x;
    cin>>n>>x;

    vector<int> v;
    
    for (int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        if (val!=x)
            v.push_back(val);
    }

    for (int i: v)
    {
        cout<<i<<" ";
    }   

    return 0;
}