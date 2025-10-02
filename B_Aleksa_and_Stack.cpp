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
        int a[n + 10];
        a[0] = 3;
        cout << a[0] << " ";
        for (int i = 1; i < n; i++)
        {
            if ((i + 1) % 2 == 0)
            {
                a[i] = a[i - 1] + 2;
                cout << a[i] << " ";
            }
            else if ((i + 1) % 2 != 0)
            {
                a[i] = a[i - 1] + 4;

                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}