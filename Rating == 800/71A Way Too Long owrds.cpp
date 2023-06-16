//   https://codeforces.com/problemset/problem/71/A

/*------26/01/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    string s;
    cin >> s;

    int n = s.length();
    int count = 0;
    if (n > 10)
    {
        for (int i = 1; i < (n - 1); i++)
        {
            count++;
        }
        cout << s[0] << count << s[count + 1] << endl;
    }
    else
    {
        cout << s << endl;
    }
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
}