// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int n;
    cin >> n;
    // while (n > 0)
    // {
    int arr[3];
    int flag = 0; /*------isko first for loop se baahar rkhe hai, due to important reason------*/
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j];
        }
        int count = 0; /*------ye first waale for loop ke andar hai, due to important reason------*/
        for (int j = 0; j < 3; j++)
        {
            if (arr[j] == 1)
            {
                count++;
                if (count == 2)
                {
                    flag++;
                }
            }
        }
    }

    cout << flag << endl;

    // n--;
    // }
}

int main()
{
    solution();
}