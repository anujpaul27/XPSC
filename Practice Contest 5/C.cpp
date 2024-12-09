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
        int n;
        cin >> n;

        vector<int> alice(n);
        vector<int> bob(n);

        loop_in(n, alice);
        loop_in(n, bob);

        int result = 0;
        loop(n)
        {
            if (bob[i] <= 2 * alice[i] && alice[i] <= 2 * bob[i]) 
            {
                result++;
            }
        }

        cout << result << endl;
    }

    return 0;
}
