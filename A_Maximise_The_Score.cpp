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
        int n;
        cin>>n;
        vector<ll>v(2*n);
        for(int i=0;i<2*n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll sum=0;
        for(int i=0;i<2*n;i+=2){
            sum+=v[i];

        }
        cout<<sum<<endl;
    }
    return 0;
}