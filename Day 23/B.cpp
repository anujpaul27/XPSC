/*
Solver: Anuj Paul
link: https://vjudge.net/contest/674807#problem/B
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

        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        map<char,int> mp;
        for (char i='a'; i<= 'z'; i++)
        {
            mp[i]=0;
        }

        for (int i: v)
        {
            for (auto j: mp)
            {
                if (i ==j.second)
                {
                    cout<<j.first;
                    mp[j.first]++;
                    break;
                }
            }
        }
        cout<<endl;
    }
    

    return 0;
}