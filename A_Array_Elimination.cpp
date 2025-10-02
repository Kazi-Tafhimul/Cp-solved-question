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
        vector<ll>v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        vector<ll>count(31,0);
        for(int i=0;i<=30;i++){
            for(int j=1;j<=n;j++){
                if((v[j]&1<<i)){
                    count[i]++;
                }
            }
        }
        vector<ll>ans;
        for(int i=1;i<=n;i++){
            bool f=1;
            for(int j=0;j<=30;j++){
                if(count[j]%i!=0){
                    f=0;
                    break;
                }


            }
            if(f){
                ans.push_back(i);
            }
        }
        for(auto u:ans){
            cout<<u<<" ";
        }
        cout<<endl;


    }
    return 0;
}