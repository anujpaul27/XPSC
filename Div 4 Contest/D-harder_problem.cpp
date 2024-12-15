#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        int a,b;
        cin>>a>>b;

        vector<string> v(a);
        for (int i=0; i<a; i++)
        {
            cin>>v[i];
        }

        long long sum_a =0, sum_b = 0;
        int count = 0;
        
        for (int i=0; i<a; i++)
        {
            for (int j=0; j<b; j++)
            {
                if (v[i][j] == '#')
                {
                    sum_a += (i+1);
                    sum_b += (j+1);
                    count++;
                }
            }
        }

        int x = sum_a / count;
        int y = sum_b / count;

        cout<<x<<" "<<y<<endl;

    }

    return 0;
}
