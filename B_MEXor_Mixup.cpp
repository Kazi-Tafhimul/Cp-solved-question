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

    vector<ll> v;
    v.push_back(0);
    for (int i = 1; i <= 3 * 10e5; i++)
    {
        v.push_back(v[i - 1] ^ i);
    }
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ans = b^v[a-1];
        if(ans==0){
            cout<<a<<endl;

        }
        else if(ans<a ||ans>a){
            cout<<a+1<<endl;
        }
        else{
            cout<<ans+2<<endl;
        }
    }

    return 0;
}