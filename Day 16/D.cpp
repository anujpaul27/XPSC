#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        ll com1 = a*n;
        ll com2 = s/n;
        ll Maximum = min(com1, com2 * n);

        if (s - Maximum <= b)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }

    return 0;
}