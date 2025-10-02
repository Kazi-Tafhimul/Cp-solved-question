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
        string s ;
        cin>>s;
        set<char>c;
        ll n = s.size();
        ll k;
        for(k=0;k<n;k++){
            if(c.find(s[k])==c.end()){
                c.insert(s[k]);

            }
            else{
                break;
            }
        }
        ll f=1;
        for(int i=k;i<n;i++){
            if(s[i]!=s[i-k]){
                f=0;
                break;

            }

        }
        if(f)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}