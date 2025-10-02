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
        ll n  = s.size();
        ll extra=0,res=1,minop=0,fact=1,mod = 998244353;
    
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                extra++;
            }
            else{
                minop+=extra;
                extra++;
                res = (res % mod * extra % mod) % mod;
                extra=0;
            }
        }
        if(extra!=0){
            minop+=extra;
            extra++;
            res = (res % mod * extra % mod) % mod;
            extra=0;
        }
        for(int i=1;i<=minop;i++){
            fact = (fact % mod * i % mod) % mod;
        }
        res  = (res % mod * fact % mod) % mod;
        cout<<minop<<" "<<res<<endl;

    }
    return 0;
}