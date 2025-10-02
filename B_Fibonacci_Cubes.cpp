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
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>>a(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<3;j++){
                ll x;
                cin>>x;
                a[i].push_back(x);
            }
            sort(a[i].begin(),a[i].end());
        }
        vector<ll>fib(n+123);
        fib[0] = 1;
        fib[1] = 2;
        for(int i=2; i<n+1;i++){
            fib[i] = fib[i-1] + fib[i-2];
        }
        for(int i=0;i<m;i++){
            if(a[i][0]>=fib[n-1] && a[i][1] >= fib[n-1] && a[i][2]>=fib[n]){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}