/*
Solver  : Anuj Paul
link    : https://codeforces.com/contest/1935/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        string str;
        cin>>str;

        string re = str;
        reverse(re.begin(),re.end());

        if (str <= re)
        {
            if(n%2==0)
            {
                cout<<str<<endl;
            }
            else 
            {
                cout<<str<<re<<endl;
            }
        }
        else 
        {
            if (n%2==1)
            {
                cout<<re<<endl;
            }
            else 
            {
                cout<<re<<str<<endl;
            }
        }
        
    }

    return 0;
}