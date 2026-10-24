#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, K;
    cin >> n >> K;

    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool found = false;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (abs(a[i] - a[j]) == K)
            {
                cout << a[i] << " " << a[j] << '\n';
                found = true;
            }
    
    if (found == false)
        cout << "Khong tim thay!";
    return 0;
}