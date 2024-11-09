/*
Solver: Anuj Paul
link: 
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vector<int> v ;
    for (int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    
    set<int> s;
    int ar[n];
    for (int i=n-1; i>=0; i--)
    {        
        s.insert(v[i]);
        ar[i] = s.size();        
    }

    while (m--)
    {
        int value;
        cin>>value;

        cout<<ar[value-1]<<endl;
    }

    return 0;
}