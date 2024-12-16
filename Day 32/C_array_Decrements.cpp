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
        vector<int> a(n);
        loop_in(n,a);

        vector<int> b(n);
        loop_in(n,b);

        int diff = -1;
        int zero_diff = -1;
        bool impossible = false;

        loop(n)
        {
            if (a[i] < b[i])
            {
                impossible = true;
                break;
            }
            if (b[i] != 0)
            {
                if (diff == -1)
                {
                    diff = a[i] - b[i];
                }
                else
                {
                    if (a[i] - b[i] != diff)
                    {
                        impossible = true;
                        break;
                    }
                }
            }
            else
            {
                zero_diff = max(zero_diff, a[i] - b[i]);
            }
        }

        if (impossible)
        {
            no;
        }
        else
        {
            if (diff == -1 || zero_diff <= diff)
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }

    return 0;
}