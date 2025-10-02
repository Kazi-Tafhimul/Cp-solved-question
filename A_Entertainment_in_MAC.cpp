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
        string s;
        cin>>n>>s;
        string r=s;
        reverse(r.begin(),r.end());
        cout<<min(s,r+s)<<endl;

    }
    return 0;
}