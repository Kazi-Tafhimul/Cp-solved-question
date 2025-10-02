#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll c,s;
    cin>>c>>s;
    ll td = s*3;
    vector<int>cr(c);
    for(ll i=0;i<c;i++){
        cin>>cr[i];
    }
    sort(cr.begin(),cr.end());
    ll ans=1;
    ll x = cr[0];
    for(ll i=1;i<c;i++){
        x+=cr[i];
        if(x>=td){
            ans++;
            break;
        }
        ans++;

    }
    cout<<ans<<endl;
    return 0;
}