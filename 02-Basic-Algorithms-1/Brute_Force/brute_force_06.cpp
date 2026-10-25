#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main()
{
    int n, S;
    cin >> n >> S;

    int a[1000];
    
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int bestDiff = INT_MAX;
    int bestA = 0, bestB = 0;

    for(int i = 0; i < n;i++)
        for(int j = i + 1; j < n; j++)
        {
            int diff = abs(a[i] + a[j] - S);

            if (diff < bestDiff)
            {
                bestDiff = diff;
                bestA = a[i];
                bestB = a[j];
            }
        }

    cout << bestA << " " << bestB << "\n";
    return 0;
}