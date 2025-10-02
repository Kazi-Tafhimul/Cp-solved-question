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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll m;
        if(n%2==0){
            m=(n-2)/2;
        }
        else if(n%2!=0){
            m = (n-1)/2;
        }
        cout<<count(v.begin()+m,v.end(),v[m])<<endl;

    }
    return 0;
}