#include <bits/stdc++.h>
using namespace std;
#define speed_for_code ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define loop(n) for (int i = 0; i < n; i++)
#define loop_in(n, v) for (int i = 0; i < n; i++) { cin >> v[i]; }
#define loop_out(n, v) for (int i = 0; i < n; i++) { cout << v[i] << " "; }

bool Vowel (char ch)
{
    return ch == 'a' || ch == 'e';
}

void isSolve ()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    
    int i = n-1;
    vector<string> ans;

    while (i >= 0)
    {
        if (i-2 >= 0 && !Vowel(str[i]) && Vowel(str[i-1]) && !Vowel(str[i-2]))
        {
            ans.push_back(str.substr(i-2,3));
            i-=3;
        }
        else 
        {
            ans.push_back(str.substr(i-1,2));
            i-=2;
        }
    }

    reverse(ans.begin(), ans.end());

    for (int j = 0; j < ans.size(); j++) 
    {
        cout << ans[j];
        if (j != ans.size() - 1) 
        {
            cout << ".";
        }
    }
    cout<<"\n";

}

int main() 
{
    speed_for_code

    int t;
    cin>>t;
    
    while (t--)
    {
        isSolve ();
    }
    
    
 return 0;
}