/*
Solver: Anuj Paul
link: https://vjudge.net/contest/666748#problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int a,b;
    cin>>a>>b;

    if (a>b)
    {
        cout<<0<<endl;
        return 0;
    }

    int count = 0;
    for (int i=a; i<b; i++)
    {
        count++;
    }

    cout<<count+1<<endl;
    

    return 0;
}