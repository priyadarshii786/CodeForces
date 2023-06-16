#include <bits/stdc++.h>
using namespace std;
// jai ganesh

void solution()
{
    int n;
    cin >> n;

    if (n % 2)
        cout << n / 2 << endl;

    else
        cout << (n / 2) - 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        solution();
        t--;
    }
    return 0;
}