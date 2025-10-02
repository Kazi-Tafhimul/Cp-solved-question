#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<int>v(n);
        vector<int>cnt(31,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
            for(int j=30;j>=0;j--){
                if(v[i]&(1<<j))cnt[j]++;

            }
        }
        ll ans=0;
        for(int i=30;i>=0;i--){
            ll need = n-cnt[i];
            if(need<=k){
                k-=need;
                ans+=(1<<i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}