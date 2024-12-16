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

    ll t, n, i, j, ans, c, m, l, h, f;
    string a, b, d;
    cin >> t;

    for (; t--;)
    {
        cin >> n;
        cin >> a;
        ans = 100000000;
        for (i = 0; i < 26; i++)
        {
            c = 0;
            f = 0;
            for (l = 0, h = n - 1; l < h;)
            {
                if (a[l] != a[h])
                {
                    if (a[l] == char(i + 97))
                    {
                        l++;
                        c++;
                    }
                    else if (a[h] == char(i + 97))
                    {
                        h--;
                        c++;
                    }
                    else
                    {
                        f++;
                        break;
                    }
                }
                else
                {
                    l++;
                    h--;
                }
            }

            if (f == 0)
            {
                ans = min(ans, c);
            }
        }

        if (ans == 100000000)

            ans = -1;

        cout << ans << "\n";
    }

    return 0;
}