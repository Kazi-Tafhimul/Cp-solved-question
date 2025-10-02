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
        int sum=0;
        bool f = false;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            sum += x;
            if (x % 3 == 1)
            {
                f = true;
            }
        }
        if (sum % 3 == 0)
        {
            cout << 0 << endl;
        }
        else if (sum % 3 == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            if (f)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}