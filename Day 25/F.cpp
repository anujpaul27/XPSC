/*
Solver  : Anuj Paul
link    : https://vjudge.net/contest/674807#problem/F
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

        string ban = "BAN";
        string subsequence = "";
        for (int i=0; i<n; i++)
        {
            subsequence += ban;
        }

        int si = subsequence.size();
        int l = 1, r = si-1;
        vector<pair<int,int>> v;

        while (l<r)
        {
            v.push_back({l,r});
            swap(subsequence[l],subsequence[r]);
            l+=3;
            r-=3;
        }

        cout<<v.size()<<endl;
        for (auto i: v)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
    }

    return 0;
}