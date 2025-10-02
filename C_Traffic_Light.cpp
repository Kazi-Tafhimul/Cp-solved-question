

#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,d,c=0,ans=0;
    cin>>n>>d;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    
    for(int i=0;i<n;i++){
        c+=d/v[i]+1;
        if(c>n){
            break;
        }
        ans++;

    }
    cout<<ans<<endl;
    


    
    return 0;
}