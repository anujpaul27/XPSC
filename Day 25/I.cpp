#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long count1 = 0, count2 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 == 0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }

        if (count1 == 0 || count2 == 0)
        {
            cout << 0 << endl;
            continue;
        }

        priority_queue<long long> odd;
        map<long long, long long> even;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 != 0)
            {
                odd.push(a[i]);
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 == 0)
            {
                even[a[i]]++;
            }
        }

        long long ans = 0;
        while (!even.empty())
        {
            long long lowest = even.begin()->first;
            long long highest = odd.top();

            if (highest > lowest)
            {
                even[lowest]--;
                if (even[lowest] == 0)
                {
                    even.erase(lowest);
                }
                lowest += highest;
                odd.push(lowest);
                ans++;
            }
            else
            {
                lowest = even.rbegin()->first;
                even[lowest]--;
                if (even[lowest] == 0)
                {
                    even.erase(lowest);
                }
                ans += 2;
                highest += lowest;
                lowest += highest;
                odd.pop();
                odd.push(highest);
                odd.push(lowest);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
