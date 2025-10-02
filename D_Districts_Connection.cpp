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
        ll n;
        cin>>n;
        vector<ll>v(n);
        vector<pair<ll,ll>>res;
        ll ind = -1;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=1;i<n;i++){
            if(v[i]!=v[0]){
                res.push_back({1,i+1});
                ind = i;

            }
        }
        if(ind==-1){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=1;i<n;i++){
           if(v[i]==v[0]){
            res.push_back({ind+1,i+1});
           }
        }
        cout<<"YES"<<endl;
        for(auto u:res){
            cout<<u.first<<" "<<u.second<<endl;
        }
    }
    return 0;
}