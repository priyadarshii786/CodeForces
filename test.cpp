#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    // while (cin >> n >> k)
    // {
    int time_left = (240 - k);
    int count = 0, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (5 * i);

        if (sum > time_left)
        {
            break;
        }

        count++;
    }
    cout << count << endl;
    // }

    return 0;
}