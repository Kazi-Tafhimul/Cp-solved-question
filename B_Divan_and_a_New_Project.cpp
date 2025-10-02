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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.rbegin(), a.rend());
        ll d = 1, ans = 0;
        vector<ll> pos(n+3);
        for (int i = 0; i < n; i += 2)
        {
            pos[a[i].second] = d;
            ans += 2 * d * a[i].first;
            if (i +1< n)
            {
                pos[a[i + 1].second] = -1 * d;
                ans += 2 * d * a[i + 1].first;
            }
            d++;
        }
        cout<<ans<<endl;
        cout<<0<<" ";
        for(int i=0;i<n;i++){
            cout<<pos[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}