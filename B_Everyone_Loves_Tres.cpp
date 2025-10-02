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
            int  n;
            cin>>n;
            if(n==1 || n==3)cout<<"-1"<<endl;
            else if(n%2==0){
                cout<<string(n-2,'3')<<"66"<<endl;
            }
            else{
                cout<<string(n-4,'3')<<"6366"<<endl;
            }
        }
    
    return 0;
}