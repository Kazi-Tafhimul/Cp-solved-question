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
        ll n,k;
        cin>>n>>k;
        vector<vector<ll>>v(n,vector<ll>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        ll op=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]!=v[n-i-1][n-j-1])op++;


            }
        }
        op/=2;
        if(k>=op && (n%2==1 || (op-k)%2==0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}