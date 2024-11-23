#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int X, Y;
        cin >> X >> Y;

        int result = -1;
        for (int i = 0; i <= min(X, Y); i++)
        {
            int x = X - i;
            int y = Y - i;
            if (x % 3 == 0 && y % 3 == 0)
            {
                result = i;
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
