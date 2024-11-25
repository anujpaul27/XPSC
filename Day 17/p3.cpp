#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int left = 0, right = 0;
    long long sum = 0;
    int minLength = INT_MAX;

    while (right < n)
    {
        // Extend the window by including a[right]
        sum += a[right];

        // While the current window sum is >= s, try to shrink the window
        while (sum >= s)
        {
            minLength = min(minLength, right - left + 1);
            sum -= a[left];
            left++;
        }

        right++;
    }

    if (minLength == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minLength << endl;
    }

    return 0;
}
