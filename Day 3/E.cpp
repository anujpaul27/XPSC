/*
Solver: Anuj Paul
link: https://vjudge.net/contest/666748#problem/E
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,t;
    cin>>a>>b>>t;


    int store = 0;
    for (int i=1; i*a <=t+0.5; i++)
    {
        store+=b;
    }

    cout<<store<<endl;

    return 0;
}