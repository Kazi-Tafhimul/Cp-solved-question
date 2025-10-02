#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        ll d = n / 2;
        if (k <= d)
        {
            cout << k + k - 1 << endl;
        }
        else if (k > d)
        {
            cout << 2 * (k - d);
        }
    }
    else if (n % 2 != 0)
    {
        ll d = n / 2 + 1;
        if (k <= d)
        {
            cout << k + k - 1 << endl;
        }
        else if (k > d)
        {
            cout << 2 * (k - d);
        }
    }

    return 0;
}