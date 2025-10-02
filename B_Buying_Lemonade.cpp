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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        ll ans = k;
        ll sum  = 0;
        ll ps = 0;
        for(int i=0;i<n;i++){
            ll m = n-i;
            sum=m*a[i]+ps;
            ps+=a[i];
            if(sum>=k){
                break;
            }
            else{
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}