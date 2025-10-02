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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        ll sum=0;
        int mx=0,ans=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            mx = max(mx,a[i]);
            if(sum-mx==mx)ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}