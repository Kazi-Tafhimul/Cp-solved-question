#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const double eps = 1e-9;
#define gcd(a, b) __gcd(a, b)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)
#define mem(a, b) memset(a, b, sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            ll f = 1;
            a[0] = min(a[0],b[0]-a[0]);
            for (int i = 1; i < n; i++)
            {
                a[i] = min(a[i], b[0] - a[i]);
                if (a[i] < a[i - 1])
                {
                    a[i] = max(a[i], b[0] - a[i]);
                    if (a[i] < a[i - 1])
                    {
                        f = 0;
                        cout<<"NO"<<endl;
                        break;

                    }
                }
            }
            if(f)cout<<"YES"<<endl;
        }
    }

return 0;
}