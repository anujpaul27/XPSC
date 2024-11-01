#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        string result;

        for (char s : str)
        {
            if (s == 'B')
            {
                auto it = find_if(result.rbegin(), result.rend(), ::isupper);
                if (it != result.rend())
                {
                    result.erase((it + 1).base() - 1);
                }
            }
            else if (s == 'b')
            {
                auto it = find_if(result.rbegin(), result.rend(), ::islower);
                if (it != result.rend())
                {
                    result.erase((it + 1).base() - 1);
                }
            }
            else
            {

                result.push_back(s);
            }
        }

        cout << result << endl;
    }

    return 0;
}
