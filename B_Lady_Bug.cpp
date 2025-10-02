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
        string a,b;
        cin>>a>>b;
        ll x=0,y=0;
        for(int i=0;i<n;i++){
            if(i%2){
                if(a[i]=='1')x--;
                if(b[i]=='0')y++;
            }
            else{
                if(a[i]=='1')y--;
                if(b[i]=='0')x++;
            }
        }
        if(x>=0 && y>=0)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}