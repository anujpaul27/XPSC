/*
Solver: Anuj Paul
link: https://codeforces.com/contest/44/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    set<pair<string,string>> val; //set include to unique value

    for (int i=0; i<n; i++)
    {
        string str1,str2;
        cin>>str1>>str2;
        val.insert({str1,str2});
    }

    cout<<val.size(); 

    return 0;
}