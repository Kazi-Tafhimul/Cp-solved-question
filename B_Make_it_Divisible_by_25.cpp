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
        string s;
        cin>>s;
        ll n = s.size();
        ll ans = n;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ll val = (s[i]-'0')*10+(s[j]-'0');
                if(val%25==0){
                    ans = min(ans,j-i-1+n-j-1);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}