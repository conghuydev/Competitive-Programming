#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int cost[10][10];

    // Nhap ma tran chi phi di chuyen tu thanh pho i den thanh pho j
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> cost[i][j];
        }
    }

    vector<int> cities;

    // Thanh pho 0 la diem xuat phat
    for (int i = 1; i < n; i++)
    {
        cities.push_back(i);
    }

    int minCost = INT_MAX;

    do
    {
        int totalCost = 0;
        int current = 0;

        // Tinh chi phi di chuyen theo thu tu cac thanh pho trong cities
        for (int city : cities)
        {
            totalCost += cost[current][city];
            current = city;
        }

        // Tro ve thanh pho xuat phat
        totalCost += cost[current][0];

        // Cap nhat chi phi nho nhat
        minCost = min(minCost, totalCost);
    }
    while (next_permutation(cities.begin(), cities.end()));

    cout << minCost << endl;
    
}