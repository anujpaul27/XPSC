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

    int t;
    cin>>t;

    while (t--)
    {
        int l,r;
        cin>>l>>r;

        int a , b;
        for (int i= 1; i<=r; i++)
        {
            for (int j=1; j<=l; j++)
            {
                a = i;
                b = j;

                if ((a+b) <=l && (__gcd(a,b)) !=1)
                {
                    cout<<a<<" "<<b<<endl;
                    break;
                }
            }
        }
    }
    
    
 return 0;
}