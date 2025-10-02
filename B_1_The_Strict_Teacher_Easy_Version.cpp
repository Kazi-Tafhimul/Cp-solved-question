#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        int x,y,z;
        cin>>x>>y>>z;
        if(x>y)swap(x,y);
        if(z<x)cout<<x-1<<endl;
        else if(z>y)cout<<n-y<<endl;
        else cout<<(y-x)/2<<endl;


    }
    return 0;
}