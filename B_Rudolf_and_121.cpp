#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        // int f=1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n - 2; i++)
        {
            if (v[i] < 0)
            {

                break;
            }
            else
            {

                v[i + 1] -= 2 * v[i];
                v[i + 2] -= v[i];
                v[i] -= v[i];
            }
        }
        if (count(v.begin(), v.end(), 0) == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}