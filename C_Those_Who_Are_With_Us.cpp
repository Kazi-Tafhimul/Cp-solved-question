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
        vector<vector<ll>>a(n,vector<ll>(m));
        ll cnt=0,mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]>mx){
                    cnt=1;
                    mx = a[i][j];
                }
                else if(a[i][j]==mx){
                    cnt++;
                }
            }
        }
        vector<ll>r(n),c(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==mx){
                    r[i]++;
                    c[j]++;
                }
            }
        }
        ll check = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r[i]+c[j]-(a[i][j]==mx)==cnt){
                    check=1;
                }
            }
        }
        cout<<mx-check<<endl;

    }
    return 0;
}