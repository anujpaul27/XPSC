/*
Solver: Anuj Paul
link: https://codeforces.com/problemset/problem/637/B
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    list<string> ls;
    unordered_map<string, list<string>::iterator> mp;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        if (mp.find(str) != mp.end())
        {
            ls.erase(mp[str]);
        }

        ls.push_front(str);

        mp[str] = ls.begin();
    }

    for (const auto &friendName : ls)
    {
        cout << friendName << "\n";
    }

    return 0;
}
