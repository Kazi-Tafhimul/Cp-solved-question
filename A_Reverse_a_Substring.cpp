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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll f=1;
    for(int i=1;i<n;i++){
        if(s[i]<s[i-1]){
            f=0;
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<endl;
            break;

        }

    }
    if(f)cout<<"NO"<<endl;
    return 0;
}