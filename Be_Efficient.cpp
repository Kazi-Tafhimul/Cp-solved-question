#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 1e5+123;
int a[mx];
ll sum[mx];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i];
    for(int i=1;i<=n;i++)sum[i]%=m;
    map<int,int>cnt;
    ll ans=0;
    cnt[0]++;
    for(int i=1;i<=n;i++){
        ans+=cnt[sum[i]];
        cnt[sum[i]]++;
    }

    cout<<"Case "<<tc<<": "<<ans<<endl;
    }



    
    return 0;
}