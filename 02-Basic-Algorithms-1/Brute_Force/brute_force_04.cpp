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
        for (int j = i + 1; j < n; j ++)
            if (a[i] + a[j] == S)
                count++;
    
    if ( count == 0)
        cout << "Khong tim thay!";
    
    cout << count;
    return 0;
}