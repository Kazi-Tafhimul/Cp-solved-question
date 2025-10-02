#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
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
        vector<ll>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        ll pmax=0,s=0,d=0,mx=0;
        for(int i=0;i<n;i++){
            pmax=max(pmax,a[i]);
            ll d = pmax-a[i];
            s+=d;
            mx=max(d,mx);
        }
        cout<<s+mx<<endl;

    }
    return 0;
}