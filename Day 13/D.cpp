#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    
    vector<string> v;

    for (int i=0; i<n; i++)
    {
        string str;
        cin>>str;
        v.push_back(str);
    }

    map<string,int> mp;
    vector<string>vv;

    for (int i=v.size()-1; i>=0; i--)
    {

        if (mp[v[i]] ==1 )
        {
            continue;
        }
        vv.push_back(v[i]);
        mp[v[i]]++;
    }

    for (string s: vv)
    {
        cout << s.substr(s.size() - 2);
    }  
    

    return 0;
}