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
    cin >> t;

    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int row1 = min(m, a);
        int row2 = min(m, b);

        int row11 = m - row1;
        int row22 = m - row2;

        int C_count = min(c, row11 + row22);

        int final_result = row1 + row2 + C_count;

        cout << final_result << endl;
    } 
    
    
 return 0;
}