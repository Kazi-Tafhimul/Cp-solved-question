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
        int x;
        cin >> x;
        int r = 100;

        int d = ((x) / 100) * 10;
        if(d>r)cout<<d<<endl;
        else cout<<r<<endl;

    }

    return 0;
}