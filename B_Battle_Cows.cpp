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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll c=0;
        for(int i=0;i<n;i++){
            if(a[i]<a[k-1]){
                c++;
            }
            else if(a[i]>a[k-1]){
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}