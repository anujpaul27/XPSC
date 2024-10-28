/*
Solver: Anuj Paul
link: https://vjudge.net/contest/666748#problem/B
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B,C;
    cin>>A>>B>>C;

    int result ;
    int check = false;
    for (int i=A; i <=B; i++)
    {
        if (i%C==0)
        {
            result = i;
            check = true;
            break;

        }
    }

    if (check) cout<<result<<endl;
    else cout<<-1<<endl;

    return 0;
}