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
    cin>>t;
    while (t--)
    {
        ll n, k, ans;

        cin >> n >> k;
        k--;

        if (n % 2 == 0)
        {
            ans = k % n;
            ans++;
        }
        else
        {
            ll mid = n/2;
            ans = (k+(k/mid))%n;
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}