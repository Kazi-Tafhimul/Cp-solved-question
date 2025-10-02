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
        vector<ll>v(n-1);
        ll f;
        cin>>f;
        for(int i=0;i<n-1;i++){
            cin>>v[i];

        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            if(f<v[i]){
                f+=(v[i]-f+1)/2;
            }
        }
        cout<<f<<endl;
        
        
    }
    return 0;
}