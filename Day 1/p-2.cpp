/*
Solver: Anuj Paul 
link: https://codeforces.com/problemset/problem/1927/A
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; // input test case 
    cin>>T;

    while (T--)
    {
        int n;
        cin>>n; // input number char of this problem

        char ar[n]; // create array for store char value 

        for (int i=0; i<n; i++)
        {
            cin>>ar[i]; // input number of char 
        }

        int left=0, right=0; // mian logic is here count left and right 
        //'W' number of this input and then n - sum of left & right 
        for (int i=0; i<n; i++)
        {
            if (ar[i]=='B')//loop for count left "W"
            {
                break;
            }
            else 
            {
                left++;
            }
        }

        for (int i=n-1; i>=0; i--) //back loop for count right "W"
        {
            if (ar[i]=='B')
            {
                break;
            }
            else 
            {
                right++;
            }
        }

        // cout<<left<<endl<<right;

        int result =left + right;
        cout<<n-result<<endl;
    }

    return 0;
}