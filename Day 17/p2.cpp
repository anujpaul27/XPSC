/*
Solver: Anuj Paul
link: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin>>n>>k;



    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int ans=0, l=0, r=0;
    ll  sum =0;

    while (r<n)
    {
        sum+=a[r];
        if (sum >= k)
        {
            ans++;
        }
        r++;
    }

    cout<<ans<<endl;


    return 0;
}