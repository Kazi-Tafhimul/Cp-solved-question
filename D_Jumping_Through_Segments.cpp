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
ll segStr[200000], segEnd[200000];
bool reachable(ll n , ll mid){
    ll maxPos = 0 ,minPos = 0;
    for(int i=0;i<n;i++){
        maxPos+=mid;
        minPos-=mid;
        ll reachableStr = max(minPos,segStr[i]);
        ll reachableEnd = min(maxPos,segEnd[i]);
        if(reachableStr>reachableEnd){
            return false;
        }
        minPos = reachableStr;
        maxPos = reachableEnd;


    }
    return true;


}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>segStr[i]>>segEnd[i];
        }
        ll l = 0, r = 1e9, mid=0;
        while(l<r){
            mid = (l+r)/2;
            if(reachable(n,mid)){
                r = mid;
            }
            else{
                l = mid+1;
            }

        }
        cout<<l<<endl;

    } 
    return 0;
}
