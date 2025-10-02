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
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        //ll cost=0;
        for(int i=0;i<n;i++){
            v[i]+=i+1;


        }
        sort(v.begin(),v.end());
        ll port=0,cost=0;
        for(int i=0;i<n;i++){
            cost+=v[i];
            if(cost<=c){
                port++;
            }
            if(cost>c){
                break;
            }


        }
        cout<<port<<endl;
    }
    return 0;
}