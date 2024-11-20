#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N, M, H;
        cin >> N >> M >> H;

        vector<int> car_capacities(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> car_capacities[i];
        }

        vector<int> power_outlets(M);
        for (int i = 0; i < M; ++i)
        {
            cin >> power_outlets[i];
        }

        // Sort car capacities and power outlets in descending order
        sort(car_capacities.rbegin(), car_capacities.rend());
        sort(power_outlets.rbegin(), power_outlets.rend());

        long long total_energy = 0;
        
        int j = 0;
        for (int i = 0; i < N && j < M; ++i)
        {
            long long energy_stored = min(static_cast<long long>(car_capacities[i]), static_cast<long long>(power_outlets[j]) * H);
            total_energy += energy_stored;
            ++j;
        }

        cout << total_energy << endl;
    }

    return 0;
}
