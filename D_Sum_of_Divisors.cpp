#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 1e7+123;
int cnt[mx];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int lim = 1e7;
    for(int i=1;i<=lim;i++){
        for(int j=i;j<=lim;j+=i){
            cnt[j]++;
        }
    }
    int n;
    cin>>n;
    ll ans =0;
    for(int i=1;i<=n;i++){
        ans+=(1LL * i*cnt[i]);

    }
    cout<<ans<<endl;
    
    return 0;
}