/*
Solver: Anuj Paul
link:
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int zero = 0;
        int other = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
                other++;
            else
                zero++;
        }
        int ans;
        if (zero == 0)
        {
            ans = 0;
        }
        else
        {
            if (other >= zero - 1)
            {
                ans = 0;
            }
            else
            {
                int mx = *max_element(a.begin(), a.end());
                if (mx == 1)
                {
                    ans = 2;
                }
                else
                {
                    ans = 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}