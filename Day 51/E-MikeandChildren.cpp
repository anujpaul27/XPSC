#include <bits/stdc++.h>
using namespace std;
#define speed_for_code ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define loop(n) for (int i = 0; i < n; i++)
#define loop_in(n, v) for (int i = 0; i < n; i++) { cin >> v[i]; }
#define loop_out(n, v) for (int i = 0; i < n; i++) { cout << v[i] << " "; }

int main() 
{
    speed_for_code

    int n;
    cin>>n;
    
    vector<int> v (n);
    loop_in(n,v);

    map<int,int> mp;

    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            int sum = v[i]+v[j];
            mp[sum]++;
        }
    }

    int ans = 0;
    for (auto i: mp)
    {
        ans = max(ans, i.second);
        // cout<<i.first<<" "<<i.second<<endl;
    } 
    cout<<ans<<"\n";
    
    
 return 0;
}