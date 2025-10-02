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
        ll longest =0,current=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                longest = max(longest,current);
                current=0;
            }
            else{
                current++;
            }
        }
        longest = max(longest,current);
        if(longest==n){
            cout<<n*n<<endl;
            continue;
        }
        ll more = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                more++;
            }
            else{
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                more++;
            }
            else{
                break;
            }
        }
        longest = max(longest,more);
        ll ans = 0;
        for(int i=1;i<=longest;i++){
            ans = max(ans,i*(longest-i+1));

        }
        cout<<ans<<endl;


    }
    return 0;
}