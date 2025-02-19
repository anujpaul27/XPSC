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

    int n,m;
    cin>>n>>m;
    
    vector<int> element (n);
    vector<int> count (n+1,0);
    loop_in(n,element);

    while (m--)
    {
        int l,r;
        cin>>l>>r;
        
        l--,r--;
        count[l]+=1;
        count[r+1]+=-1;
    }

    for (int i=1; i<count.size(); i++)
    {
        count[i] +=count[i-1];
    }

    //sort decending order 
    sort(element.begin(), element.end(), greater<int>());
    sort(count.begin(), count.end(), greater<int>());

    ll sum =0;
    for (int i=0; i<n; i++)
    {
        sum += (1LL * count[i] * element[i]);
    }
    cout<<sum<<endl;
    
    
 return 0;
}