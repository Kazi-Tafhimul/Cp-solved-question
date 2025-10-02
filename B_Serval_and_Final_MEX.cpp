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
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<pair<ll,ll>>ans;
        ll m = n-1;
        if(v[0]==0|| v[1]==0){
            ans.push_back({0,1});
            m--;
        }
        ll f=0;
        for(int i=2;i<n;i++){
            if(v[i]==0){
                f=1;
            }
        }
        if(!f){
            ans.push_back({0,m});
        }
        else{
            ans.push_back({1,m});
            ans.push_back({0,1});

        }
        cout<<ans.size()<<endl;
        for(auto u:ans){
            cout<<u.first+1<<" "<<u.second+1<<endl;
        }
        
    }
    
    return 0;
}
