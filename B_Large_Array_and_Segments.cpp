#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)/gcd(a,b)*(b))
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))

// Fast exponentiation: a^b
ll fast_pow(ll a, ll b) {
    ll res = 1;
    while(b > 0) {
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

// Modular exponentiation: (a^b) % mod
ll mod_pow(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    while(b > 0) {
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        vector<ll>v(n);
        ll s=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s+=v[i];

        }
        if(s*k<x){
            cout<<0<<endl;
            continue;
        }
        else{
            ll rem = x%s;
            ll div = x/s;
            if(rem==0){
                div--;
                rem=s;
            }
            ll ans = n*k-div*n;
            ll suf=0;
            for(int i=n-1;i>=0;i--){
                suf+=v[i];
                if(suf>=rem){
                    break;
                }
                ans--;
            }
            cout<<ans<<endl;
        }
    }
    
    return 0;
}
