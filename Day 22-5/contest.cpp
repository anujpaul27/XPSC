    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int T;
        cin >> T;
     
        for (int i=0; i<T; i++)
        {
            int x, y;
            cin >> x >> y;
     
            int count = max(x, y);
            while ((count % x) != (count % y))
            {
                count++;
            }
     
            cout<<count<<endl;
        }
     
        return 0;
    }