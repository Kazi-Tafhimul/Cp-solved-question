#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
const ll mod = 998244353;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<ll>po(1e5+1);
    po[0] = 1;
    for(int i=1;i<po.size();i++){
        po[i] = 2*po[i-1]% mod;

    }
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>p(n),q(n),ans;
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
           cin>>q[i];
        }
        vector<ll>posa(n),posb(n);
        for(int i=0;i<n;i++){
            posa[p[i]] = i;
            posb[q[i]] = i;
           
        }
        set<ll>sta, stb;
        for(int i=0;i<n;i++){
            sta.insert(p[i]);
            stb.insert(q[i]);
            ll x = *sta.rbegin();
            ll y = *stb.rbegin();
            pair<ll,ll>p1 = make_pair(x,q[i-posa[x]]);
            pair<ll,ll>p2 = make_pair(y,p[i-posb[y]]);
            pair<ll,ll>ansp = max(p1,p2);
            ans.push_back((po[ansp.first]+po[ansp.second])%mod);

        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    
    
    return 0;
}