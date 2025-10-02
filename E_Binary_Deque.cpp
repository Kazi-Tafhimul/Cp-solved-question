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
       ll n,s;
       cin>>n>>s;
       ll sum=0;
       vector<ll>v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
       }
       if(sum==s){
        cout<<0<<endl;
       }
       else if(sum<s){
        cout<<-1<<endl;

       }
       else{
        ll cnt=0,ans=0,k;
        for(int i=0;i<n;i++){
            ans+=v[i];
            cnt++;
            if(ans==s){
                k=i+1;
                break;
            }
        }
       ll mx = cnt;
       ll ind=0;
       for(int i=k;i<n;i++){
        int j=i;
        while(j<n){
            if(v[j]==1){
                break;
            }
            cnt++;
            mx = max(mx,cnt);
            j++;
        }
        i=j;
        ans++;
        while(ind<n){
            if(v[ind]==1){
                ind++;
                break;
            }
            cnt--;
            ind++;
            mx = max(mx,cnt);
        }
       }
       cout<<n-mx<<endl;
        

       }

       

    }
    return 0;
}