/*
Solver: Anuj Paul
link: https://codeforces.com/contest/381/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> v;

    for (int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        v.push_back(m);
    }

    int sereja=0, dima=0;

    while (!v.empty()) 
    {
        if (v.front() < v[v.size()-1])
        {
            sereja+=v[v.size()-1];
            v.pop_back();
        }
        else 
        {
            sereja+=v.front();
            v.erase(v.begin());
        }

        if (v.front() < v[v.size()-1])
        {
            dima+=v[v.size()-1];
            v.pop_back();
        }
        else 
        {
            dima+=v.front();
            v.erase(v.begin());
        }
        
    }

    // if (n%2 != 0)
    // {
    //     sereja+=v.front();
    // }

    cout<<sereja<<" "<<dima<<endl;


    return 0;
}