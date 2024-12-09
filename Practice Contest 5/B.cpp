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
        int h,x,y;
        cin>>h>>x>>y;

        int val = h-y;
        int result = 1;
        while(true)
        {
            
            if (val <= 0)
            {
                break;
            }
            else 
            {
                result ++;
            }
            val -= x;
            
        }

        cout<<result<<endl;
        
    } 
    
    
 return 0;
}