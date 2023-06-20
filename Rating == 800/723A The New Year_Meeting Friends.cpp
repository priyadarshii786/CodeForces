#include <iostream>
#include <cstdlib>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    sort(num, num + 3);
    cout << num[2] - num[0] << endl;
    return 0;
}