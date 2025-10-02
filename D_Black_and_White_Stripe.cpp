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
        string s;
        cin>>s;
        ll seg=0,b=0,w=0,ans = LLONG_MAX;
        for(int i=0;i<s.size();i++){
            seg++;
            if(s[i]=='B')b++;
            if(s[i]=='W')w++;
            if(seg>=k){
                if(s[i-k]=='B')b--;
                if(s[i-k]=='W')w--;
                ans = min(ans,w);
                seg--;

            }

        }
        cout<<ans<<endl;
    }
    return 0;
}