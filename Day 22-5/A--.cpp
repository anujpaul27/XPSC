#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n <= 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            string result;
            if (n % 2 == 0)
            {
                char c = 'A';
                for (int i = 0; i < n/2; i ++)
                {
                    result += c;
                    result += c;
                    c++;
                }
            }
            else
            {
                for (int i = 0; i < n - 1; i += 2)
                {
                    result += "AA";
                }
                result += "B"; 
            }
            cout << result << endl;
        }
    }

    return 0;
}
