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

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                if ( a[i] + a[j] + a[k] == S)
                {
                    count++;
                }

    cout << count;
    return 0;
}