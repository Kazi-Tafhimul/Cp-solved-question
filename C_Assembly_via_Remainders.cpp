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
        int a[n],x[n-1];
        for(int i=0;i<n-1;i++)cin>>x[i];
        for(int i=0;i<n;i++){
            if(i==0)a[i]=1000;
            else{
                a[i]=a[i-1]+x[i-1];
            }
        }
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}