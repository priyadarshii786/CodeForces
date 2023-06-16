#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int police = 0, ans = 0;
        while (n--)
        {
            int temp;
            cin >> temp;
            if (temp < 0)
                if (police)
                    police--;
                else
                    ans += 1;
            else
                police += temp;
        }
        cout << ans << endl;
    }

    return 0;
}