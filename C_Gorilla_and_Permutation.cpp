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
        int n,m,k;
        cin>>n>>m>>k;
        for(int i = n;i>=k; i--){
            cout<<i<<" ";
        }
        for(int i = m+1;i<k;i++){
            cout<<i<<" ";
        }
        for(int i= 1;i<=m;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}