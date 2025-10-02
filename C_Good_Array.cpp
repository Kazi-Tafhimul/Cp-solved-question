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
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll mx = 1e6;
    vector<ll>cnt(mx+1);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        cnt[v[i]]++;
        sum+=v[i];
    }
    vector<ll>ind;
    ll ans=0;
    for(int i=0;i<n;i++){
        sum-=v[i];
        cnt[v[i]]--;
        if(sum%2==0 && sum/2<=mx && cnt[sum/2]>0){
            ind.push_back(i+1);
           


        }
        sum+=v[i];
        cnt[v[i]]++;
    }
    cout<<ind.size()<<endl;
    for(auto u:ind){
        cout<<u<<" ";
    }
    cout<<endl;
    



    return 0;
}