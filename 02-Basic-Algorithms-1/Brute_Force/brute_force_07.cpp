#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int bestSum = INT_MIN;
    int bestA = 0, bestB = 0;
    int sum;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            sum = a[i] + a[j];
            if (sum > bestSum)
            {
                bestSum = sum;
                bestA = a[i];
                bestB = a[j];
            }
        }

    cout << bestA << " " << bestB << '\n';
    cout << "Tong lon nhat: " << bestSum;    
    return 0;        
}
