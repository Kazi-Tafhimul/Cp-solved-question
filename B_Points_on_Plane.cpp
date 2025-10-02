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
        ll n;
        cin>>n;
        ll sq = sqrt(n);
        if(sq*sq==n){
            cout<<sq-1<<endl;
        }
        else{
            cout<<sq<<endl;
        }
    }
    return 0;
}