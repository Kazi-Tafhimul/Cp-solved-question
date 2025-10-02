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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        sort(v.begin(),v.end());
        v[n-1]--;
        sort(v.begin(),v.end());
        if(v[n-1]-v[0]>k || sum%2==0){
            cout<<"Jerry"<<endl;
        }
        else{
            cout<<"Tom"<<endl;
        }
    }
    return 0;
}