#include <bits/stdc++.h>
using namespace std;
#define speed_for_code ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define loop(n) for (int i = 0; i < n; i++)
#define loop_in(n, v) for (int i = 0; i < n; i++) { cin >> v[i]; }
#define loop_out(n, v) for (int i = 0; i < n; i++) { cout << v[i] << " "; }

ll CalculateInvertion(vector<int> v, int n)
{
    ll one=0, result=0;
    loop(n)
    {
        if (v[i] == 1)
        {
            one++;
        }
        else 
        {
            result+=one;
        }
    }

    return result;
}

int main() 
{
    speed_for_code

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v(n);
        loop_in(n,v);
        ll ans = CalculateInvertion(v,n);

        int check = -1;
        loop(n)
        {
            if (v[i] == 0)
            {   
                v[i]=1;
                check = i;
                break;
            }
        }
        ans = max(ans,CalculateInvertion(v,n));

        if (check != -1)
        {
            v[check] = 0;
        }

        for (int i=n-1; i>=0; i--)
        {
            if (v[i]==1)
            {
                v[i] = 0;
                break;
            }
        }

        ans = max(ans,CalculateInvertion(v,n));
        cout<<ans<<endl;

    } 
    
    
 return 0;
}