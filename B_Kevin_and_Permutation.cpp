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
        ll n, k;
        cin >> n >> k;
        ll a = 1;
        vector<ll> v(n+10, 0);
        for (int i = 1; i <= n; i++)
        {
            if (i % k == 0)
            {
                v[i] = a;
                a += 1;
            }

        }
        for(int i=1;i<=n;i++){
            if(v[i]==0){
                v[i]=a;
                a++;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}