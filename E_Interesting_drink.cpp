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
    sort(a, a + n);
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        int up = upper_bound(a, a + n, m)-a;
        cout<<up<<endl;
    }

    return 0;
}