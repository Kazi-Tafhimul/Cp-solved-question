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
    ll n,x,k;
    cin>>n>>k>>x;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll cnt=1;
    vector<ll>diff;
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]>x){
            cnt++;
            if(v[i+1]-v[i]-1>=1){
                diff.push_back(v[i+1]-v[i]-1);
            }
        }
    }
    sort(diff.begin(),diff.end());
    for(int i=0;i<diff.size();i++){
        ll c = diff[i];
        if(c/x<=k && k>0){
            cnt--;
            k-=c/x;
        }

    }
    cout<<cnt<<endl;

    

    return 0;
}