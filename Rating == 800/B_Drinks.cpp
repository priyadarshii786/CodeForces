#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
const int maxn = 1e5 + 10;
int id[maxn], num[maxn], a[maxn];
int pos[maxn], cnt[maxn], ans = 0;
int last[maxn];

struct node

{
    int l, r, id;
    node() {}
    node(int _l, int _r, int _id)
    {
        l = _l;
        r = _r;
        id = _id;
    }
} seg[maxn];

bool cmp(const node &a, const node &b)
{
    return pos[a.l] ^ pos[b.l] ? pos[a.l] < pos[b.l] : (pos[a.l] & 1 ? a.r > b.r : a.r < b.r);
}

void add(int x)
{
    if (cnt[num[x]] == id[num[x]])
        ans--;
    cnt[num[x]]++;
    if (cnt[num[x]] == id[num[x]])
        ans++;
}

void del(int x)
{
    if (cnt[num[x]] == id[num[x]])
        ans--;
    cnt[num[x]]--;
    if (cnt[num[x]] == id[num[x]])
        ans++;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
        a[i] = num[i];
    }
    sort(a + 1, a + 1 + n);
    int tp = 0;
    a[0] = a[1] - 1;
    for (int i = 1; i <= n; i++)
        if (a[i] != a[i - 1])
            id[tp++] = a[i];
    for (int i = 1; i <= n; i++)
        num[i] = lower_bound(id, id + tp, num[i]) - id;
    int t = sqrt(n);
    for (int i = 1; i <= n; i++)
        pos[i] = i / t;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        seg[i] = node(x, y, i);
    }
    sort(seg, seg + m, cmp);

    int l = 1, r = 0;
    for (int i = 0; i < m; i++)
    {
        while (r < seg[i].r)
            add(++r);
        while (l > seg[i].l)
            add(--l);
        while (r > seg[i].r)
            del(r--);
        while (l < seg[i].l)
            del(l++);
        last[seg[i].id] = ans;
    }
    for (int i = 0; i < m; i++)
        cout << last[i] << endl;
    return 0;
}
