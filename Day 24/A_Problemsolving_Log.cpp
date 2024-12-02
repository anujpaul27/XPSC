/*
Solver  : Anuj Paul
link    : https://codeforces.com/contest/1914/problem/A
*/
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

        map<char,int> createLeter;
        
        char ch = 'A';
        for (int i=1; i<=26; i++)
        {
            createLeter[ch] = i;
            ch++;
        }

        string str;
        cin>>str;
        
        map<char,int> count;
        for (char c: str)
        {
            count[c]++;
        }

        int cnt = 0;
        for (auto c: count)
        {
            if(createLeter[c.first] <= c.second)
            {
                cnt++;
            }

            //cout<<createLeter[c.first]<<" "<<c.first<<" " <<c.second<<endl;
        }

        cout<<cnt<<endl;
    }

    return 0;
}