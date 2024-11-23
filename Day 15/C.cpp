#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int zero = 0, one = 0;
        char prev = S[0];

        if (prev == '0')
            zero++;
        else
            one++;

        for (int i = 1; i < N; i++)
        {
            if (S[i] != prev)
            {
                if (S[i] == '0')
                    zero++;
                else
                    one++;
            }
            prev = S[i];
        }

        cout << min(zero, one) << "\n";
    }
    return 0;
}
