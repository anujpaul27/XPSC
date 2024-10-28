/*
Solver: Anuj Paul
link: https://vjudge.net/contest/666748#problem/D
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number;
    cin>>number;
    string str = to_string(number);
    string str2 = "";
    
    for (int i=0; i<4-str.size(); i++)
    {
        str2.append("0");
    }
    str2.append(str);

    cout<<str2<<endl;

    return 0;
}