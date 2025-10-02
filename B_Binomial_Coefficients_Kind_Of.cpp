#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll p;
    cin>>p;
    ll ans;
    ll n[p+123],k[p+123];
    for(ll i=1;i<=p;i++){
        cin>>n[i];
    }
     for(ll i=1;i<=p;i++){
        cin>>k[i];
    }
    for(int i=1;i<=p;i++){
        ans = (n[i-1]*k[i] + n[i-1]*k[i-1])% (1LL*(1e9+7));

    }

    return 0;
}