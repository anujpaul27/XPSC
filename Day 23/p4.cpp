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
        int a, b;
        cin >> a >> b;

        // Calculate possible values
        int val1 = a + b;   // f(a, b, 0)
        int val2 = (b ^ a); // f(a, b, a)
        int val3 = (a ^ b); // f(a, b, b)

        cout << min({val1, val2, val3}) << endl;
    }

    return 0;
}
