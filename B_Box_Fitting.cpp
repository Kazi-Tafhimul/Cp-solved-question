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
    ll t;
    cin>>t;
    while(t--){
        ll n,w;
        cin>>n>>w;
        multiset<ll>s;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            s.insert(x);
        }
        ll h=1, space = w;
        while(!s.empty()){
            auto it = s.upper_bound(space);
            if(it!=s.begin()){
                it--;
                ll val = *it;
                space-=val;
                s.erase(it);
            }
            else{
                space = w;
                h++;
            }


        }
        cout<<h<<endl;
    }
    return 0;
}