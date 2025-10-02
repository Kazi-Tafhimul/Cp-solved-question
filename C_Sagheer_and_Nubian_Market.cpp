#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)/gcd(a,b)*(b))
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))

// Modular addition
ll mod_add(ll a, ll b, ll m) {
  return ((a % m) + (b % m)) % m;
}
// Modular subtraction
ll mod_sub(ll a, ll b, ll m) {
return ((a % m) - (b % m) + m) % m;
}
// Modular multiplication
ll mod_mul(ll a, ll b, ll m) {
return ((a % m) * (b % m)) % m;
}
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
ll mod_inv(ll a, ll m){
return mod_pow(a, m-2, m);
}
ll mod_div(ll a, ll b, ll m){
return mod_mul(a, mod_inv(b,m), m);
}
const ll MOD = 1000000007;   // prime modulus
const int MAXN = 100;        // set at least as large as max n you need
vector<ll> fact, invfact;
void precompute_factorials(int N = MAXN) {
fact.assign(N+1, 0);
invfact.assign(N+1, 0);
fact[0] = 1;
 for (int i = 1; i <= N; ++i) fact[i] = mod_mul(fact[i-1], i, MOD);
invfact[N] = mod_pow(fact[N], MOD - 2, MOD); // inverse of fact[N]
for (int i = N-1; i >= 0; --i) invfact[i] = mod_mul(invfact[i+1], i+1, MOD);
}
ll ncr(int n, int r) {
if (r < 0 || r > n) return 0;
 return mod_mul(mod_mul(fact[n], invfact[r], MOD), invfact[n-r], MOD);
}
ll n,s;
vector<ll>v,b;
ll check(ll mid){
    for(int i=0;i<n;i++){
         b[i] = v[i] + 1LL * (i+1) * mid;
    }
    sort(b.begin(),b.end());
    ll sum=0;
    for(int i=0;i<mid;i++){
        sum+=b[i];

    }
    if(sum<=s)return sum;
    else{
        return -1;
    }

}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin>>n>>s;
    v.resize(n);
    b.resize(n);
    
    for(int i=0;i<n;i++){
       cin>>v[i];

        
    }
    ll l=0,r=n,ans=0;
    while(l<r){
        ll mid = (l+r+1)/2;
        if(check(mid)>=0){
            
            l = mid;
        }
        else{
            r = mid-1;
        }

    } 
    cout<<l<<" "<<check(l)<<endl;
    return 0;
}
