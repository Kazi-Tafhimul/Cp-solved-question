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
        int p[n];
       for(int i=0;i<n;i++)cin>>p[i];
       if(n>2){
        cout<<"NO"<<endl;
       }
       else if(n==2){
        if(abs(p[0]-p[1])==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
       }

    }
    return 0;
}