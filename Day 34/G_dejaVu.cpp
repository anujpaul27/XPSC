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
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        loop_in(n, a);

        vector<int> x;
        set<int> unique_values;

        loop(q)
        {
            int value;
            cin >> value;
            if (unique_values.find(value) == unique_values.end())
            {
                
                x.push_back(value);
                unique_values.insert(value);
            }
        }

        loop(x.size())
        {
            for (int j = 0; j < n; j++)
            {
                int power_i = pow(2, x[i]);
                if (a[j] % power_i == 0)
                {
                    a[j] += pow(2, (x[i] - 1));
                }
            }
        }

        loop_out(n, a);
        cout << endl;
    }

    return 0;
}
