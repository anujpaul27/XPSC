#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        if (is_sorted(v.begin(), v.end()))
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            bool cnt = true;
            for (int i=0; i<n; i++)
            {
                int k = v[0];
                v.push_back(k);
                v.erase(v.begin());
                if (is_sorted(v.begin(),v.end()))
                {
                    cout<<"YES"<<endl;
                    cnt=false;
                }
            }

            if (cnt) cout<<"NO"<<endl;
        }
    }

    return 0;
}