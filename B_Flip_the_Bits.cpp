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
        ll n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        ll cnt=0;
        ll f=1;
        if(n==1){
            if(a==b)cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }

        
            a.push_back('0');
            b.push_back('0');
            for(int i=0;i<n;i++){
                cnt+=(a[i]=='1')-(a[i]=='0');
                if((a[i]==b[i])!=(a[i+1]==b[i+1]) && cnt!=0){
                    cout<<"NO"<<endl;
                    f=0;
                    break;
                }
            }
            if(f)cout<<"YES"<<endl;
        
    }
    return 0;
}