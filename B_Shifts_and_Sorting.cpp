#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
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
        string s;
        cin >> s;
        int x = 0;
        ll ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1'){

                x++;
            }
            else if (x == 0)
            {
                continue;
            }
            else
            {
                ans +=(x + 1);
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}