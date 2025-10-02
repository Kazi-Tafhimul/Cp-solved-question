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
        int n,r,b;
        cin>>n>>r>>b;
        ll x = r/(b+1);
        ll y = r%(b+1);
        for(int i=0;i<b;i++){
            if(y){
                y--;
                for(int j=0;j<x+1;j++){
                    cout<<"R";
                }
            }
            else{
                for(int j=0;j<x;j++){
                    cout<<"R";
                }
            }
            cout<<"B";
        }
        if(y){
            y--;
            for(int j=0;j<x+1;j++){
                cout<<"R";
            }
        }
        else{
            for(int j=0;j<x;j++){
                cout<<"R";
            }
        }
        cout<<endl;
    }
    
    return 0;
}