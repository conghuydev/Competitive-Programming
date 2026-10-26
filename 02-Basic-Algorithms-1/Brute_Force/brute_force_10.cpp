#include <iostream>
using namespace std;

int main()
{
    int n, S;
    cin >> n >> S;

    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int count = 0;
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i + 1; j < n; j++)
        {
            sum += a[j];
            if (sum == S)
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}