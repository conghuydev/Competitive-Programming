#include <bits/stdc++.h>
using namespace std;

string reverseString(string str)
{
    if(str.empty())
        return str;
    return str.back() + reverseString(str.substr(0, str.size() - 1));
}

int main()
{
    string str;
    cin >> str;
    cout << reverseString(str);
    return 0;
}