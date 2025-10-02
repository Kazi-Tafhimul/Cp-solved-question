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
        cout<<2*n-1<<endl;
        for(int i=1;i<n;i++){
            cout<<i<<" "<<1<<" "<<i<<endl;
            cout<<i<<" "<<i+1<<" "<<n<<endl;

        }
        cout<<n<<" "<<1<<" "<<n<<endl;
        }
    return 0;
}