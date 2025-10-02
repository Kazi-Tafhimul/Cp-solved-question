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
        if(n<=4)cout<<-1<<endl;
        else{
           
            for(int i=1;i<=n;i+=2){
                if(i!=5)cout<<i<<" ";

              
            }
            cout<<5<<" "<<4<<" ";
            
            for(int i=2;i<=n;i+=2){
                if(i!=4)cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}