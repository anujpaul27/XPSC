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

    ll X;
    cin>>X;
    ll a = 1, b = X;
    for (ll i = 1; i * i <= X; i++) 
    {
        if (X % i == 0) 
        { 
            ll d1 = i;
            ll d2 = X / i;
            if (max(d1, d2) < max(a, b)) 
            {
                a = d1;
                b = d2;
            }
        }
    }
    
    cout<<a<<" "<<b<<endl;
    
 return 0;
}