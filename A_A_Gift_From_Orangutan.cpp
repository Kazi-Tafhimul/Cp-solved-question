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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int mx,mn;
        mx=-1;
        mn=2000;
        for(int i=0;i<n;i++){
            mx=max(a[i],mx);
            mn = min(a[i],mn);
        }
        cout<<(n-1)*(mx-mn)<<endl;
    }
    return 0;
}