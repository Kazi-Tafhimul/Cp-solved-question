#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)
#define mem(a, b) memset(a, b, sizeof(a))
const int mx = 1e5 + 123;
int a[mx];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<int, int>> v;
    v.push_back({1, a[0]});
    for (int i = 1; i < n; i++)
    {
        v.push_back({v[i - 1].second + 1, v[i - 1].second + a[i]});
    }
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        int l = 0, r = n - 1;
        int ans;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid].first <= m && v[mid].second >= m)
            {
                ans = mid;
                break;
            }
            if (v[mid].first > m)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}