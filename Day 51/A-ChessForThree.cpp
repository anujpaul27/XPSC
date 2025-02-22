#include <bits/stdc++.h>
using namespace std;
#define speed_for_code ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define loop(n) for (int i = 0; i < n; i++)
#define loop_in(n, v) for (int i = 0; i < n; i++) { cin >> v[i]; }
#define loop_out(n, v) for (int i = 0; i < n; i++) { cout << v[i] << " "; }

void isSolve ()
{
    int p1,p2,p3;
    cin>>p1>>p2>>p3;

    int total = p1+p2+p3;

    if (total % 2 != 0)
    {
        cout<<-1<<endl;
        return;
    }
    else if (p3 > p1+p2)
    {
        cout<<p1+p2<<endl;
    }
    else
    {
        cout<<total/2<<endl;
    }

}

int main() 
{
    speed_for_code

    int t;
    cin>>t;
    
    while (t--)
    {
        isSolve();
    }
    
    
 return 0;
}