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
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>nxt(n,n);
        nxt[n-1]=n;
        for(int i=n-2;i>=0;i--){
            if(v[i]==v[i+1])nxt[i] = nxt[i+1];
            else{
                nxt[i] = i+1;
            }
        }
        ll q,l,r;
        cin>>q;
        while(q--){
            cin>>l>>r;
            l--,r--;
            if(nxt[l]>r){
                cout<<-1<<" "<<-1<<endl;
            }
            else{
                cout<<l+1<<" "<<nxt[l]+1<<endl;
            }
        }
        
    }
    return 0;
}