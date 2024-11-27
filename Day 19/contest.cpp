#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T; 

    while (T--)
    {
        int N, K;
        cin >> N >> K; 

        vector<int> v;
        bool valid = true;
        if (K == 1)
        {
            valid = false;
        }
        else
        { 
            for (int i = 0; i < N; i++)
            {
                v.push_back((i + K - 1) % N + 1); 
            }
        }

        if (valid)
        {
            for (int i = 0; i < N; i++) 
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else 
        {
            cout<< -1 <<endl;
        }
    }

    return 0;
}
