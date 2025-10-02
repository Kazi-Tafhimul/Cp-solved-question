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
       // vector<ll>v(n);
        set<ll>s;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            s.insert(a);
        }
        if(s.size()==n)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}