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
        ll n,m,a,b;
        cin>>n>>m>>a>>b;
        ll x1 = ceil(log2((double)n));
        ll x2 = ceil(log2((double)m));
        ll x3 = ceil(log2((double)min(a,n-a+1)));
        ll x4 = ceil(log2((double)min(b,m-b+1)));
        cout<<min(x1+x4,x2+x3)+1<<endl;

    }
    return 0;
}