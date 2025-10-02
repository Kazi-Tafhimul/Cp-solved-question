#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
vector<ll>v;

void check(){
    for(int i=1;i<=100000;i*=10){
        for(int j=1;j<=9;j++){
            v.push_back(i*j);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    check();
    while(t--){
        ll x;
        cin>>x;
        ll ans = 0;
        for(auto a:v){
            if(a<=x){
                ans++;

            }
            else{
                break;
            }
        }
        cout<<ans<<endl;


    }
    return 0;
}