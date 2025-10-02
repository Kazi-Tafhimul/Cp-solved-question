#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 1e8;
bitset<mx>isPrime;
vector<ll>primes;

void primeGen(){
    ll n = 1e6;
    for(int i=3;i<=n;i+=2)isPrime[i]=1;
    int sq = sqrt(n);
    for(int i=3;i<=sq;i+=2){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j] = 0;
            }
        }

    }
    primes.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
}
ll binarySearch(ll a, vector<ll>&v1){
    ll l = 0;
    ll r  = v1.size()-1;
    ll ans = 1e7;
    while(l<=r){
        ll mid = l+(r-l)/2;
        if(v1[mid]>=a){
            ans  = min(ans,v1[mid]);
            r = mid-1;

        }
        else{
            l = mid+1;
        }
    }
    return ans;

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    primeGen();
    int t;
    cin>>t;
    while(t--){
        ll d;
        cin>>d;
        ll c1 = 1;
        ll c2 = binarySearch(c1+d, primes);
        ll c3 = binarySearch(c2+d, primes);
        cout<<c1*c2*c3<<endl;
    }
    return 0;
}