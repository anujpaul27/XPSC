#include <bits/stdc++.h>
using namespace std;
#define speed_for_code ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define loop(n) for (int i = 0; i < n; i++)
#define loop_in(n, v) for (int i = 0; i < n; i++) { cin >> v[i]; }
#define loop_out(n, v) for (int i = 0; i < n; i++) { cout << v[i] << " "; }

int main() 
{
    speed_for_code

    int t;
    cin>>t;

    while (t--)
    {
        string str;
        cin>>str;
        string final_str(str.length(), ' ');
        for (int i=0; i<str.length(); i++)
        {
            if (str[i]== 'p')
            {
                final_str[i]='q';
            }
            else if (str[i] == 'q')
            {
                final_str[i] ='p';
            }
            else 
            {
                final_str[i] = 'w';
            }
        }
        reverse(final_str.begin(), final_str.end());
        cout<<final_str<<endl;
    } 
    
    
 return 0;
}