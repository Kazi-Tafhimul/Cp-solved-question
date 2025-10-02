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
    ll n,h;
    cin>>n>>h;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>a;
    ll ans,sum;
    for(int i=0;i<n;i++){
        a.push_back(v[i]);
        sum=0;
        sort(a.rbegin(),a.rend());
        for(int j=0;j<a.size();j+=2){
            sum+=a[j];
        }
        if(sum<=h){
            ans=i;
            
        }
        


    }
    cout<<ans+1<<endl;
    return 0;
}