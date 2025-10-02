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
        ll n,c,d;
        cin>>n>>c>>d;
        vector<ll>a(n*n);
        vector<ll>b(n*n);
        for(int i=0;i<n*n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        b[0]=a[0];
        for(int i=1;i<n;i++){
            b[i]=b[i-1]+c;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                b[(i*n)+j]=b[(i-1)*n+j]+d;
            }
        }
        sort(b.begin(),b.end());
        if(a==b)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }



    }
    return 0;
}