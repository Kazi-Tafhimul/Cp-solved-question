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
        string s,t;
        cin>>s>>t;
       int count0= count(s.begin(),s.end(),'0');
       int cnt1 = n-count0;
       bool f = true;
       for(int i=0;i<n-1;i++){
        if(count0==0||cnt1==0){
            cout<<"NO"<<endl;
            f=false;
            break;
            
        }
        if(t[i]=='0')cnt1--;
        else{
            count0--;
        }
       }
       
        if(f)cout<<"YES"<<endl;



    }
    return 0;
}