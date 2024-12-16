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
    cin >> n;
    string ans;
    loop(n) 
    {
        ans += 'a';
    }
    for (int i = 2; i < n; i += 4) 
    {
        ans[i] = 'b';
        if (i + 1 < n) 
            {
                ans[i + 1] = 'b';
            }
    }

    cout << ans << endl;
    return 0; 
}