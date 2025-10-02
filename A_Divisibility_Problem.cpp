#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else{
            ll r=a/b;
            cout<<(r+1)*b-a<<endl;
        }
    }
    return 0;
}