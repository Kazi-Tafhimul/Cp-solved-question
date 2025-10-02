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
        set<ll>s;
        for(int i=2;i*i<=n;i++){
            if(n % i==0 && !s.count(i)){
                s.insert(i);
                n/=i;
                break;

            }
        }
         for(int i=2;i*i<=n;i++){
            if(n % i==0 && !s.count(i)){
                s.insert(i);
                n/=i;
                break;

            }
        }
        if(s.size()<2 || s.count(n)){
            cout<<"NO"<<endl;
        }
        else{
            s.insert(n);
            cout<<"YES"<<endl;
            for(auto u:s){
                cout<<u<<" ";
            }
            cout<<endl;
        }

        
    }
    return 0;
}