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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<ll>a(n);
        a[0] = b*k;
        s-=b*k;
        if(s<0){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                a[i]+=min(s,k-1);
                s-=min(s,k-1);
                
                
            }
            if(s>0)cout<<-1<<endl;
            else{
                for(int i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}