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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>a(m);
        vector<ll>b(k);
        string s;
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            cin>>b[i];
        }
        if(n==k){
            for(int i=0;i<m;i++){
                s+='1';
            }
        }
        else if(n>m && m>k){
            for(int i=0;i<m;i++){
                s+='0';
            }
        }
        else{

        for(int i=0;i<m;i++){
            if(count(b.begin(),b.end(),a[i])){
                s+='0';
            }
            else{
                s+='1';
            }
        }
        }
        cout<<s<<endl;


    }
    return 0;
}