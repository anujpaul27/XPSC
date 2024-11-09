/*
Solver: Anuj Paul
link: https://codeforces.com/problemset/problem/1702/C
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

        int n,q;
        cin>>n>>q;
        
        map<int, set<int>> mp;
        for (int i=1; i<=n; i++)
        {
            int val;
            cin>>val;
            mp[val].insert(i);
        }

        while (q--)
        {
            int u,k;
            cin>>u>>k;

            if ((mp.find(u) == mp.end()) || (mp.find(k) == mp.end()))
            {
                cout<<"NO"<<endl;
            }
            else 
            {
                int lefvalue = *mp[u].begin();
                int rightvalue= *mp[k].rbegin();

                if (lefvalue < rightvalue)
                {
                    cout<<"YES"<<endl;
                }
                else 
                {
                    cout<<"NO"<<endl;
                }

            }
        }


        
    }
    

    return 0;
}