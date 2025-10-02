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
       string s;
       cin>>s;
       ll n = s.size();
       int f=1;
       if(n==1){
        f=0;

       }
       else if(s[0]!='1'){
        f=0;
       }
       else if(s[n-1]=='9'){
        f=0;
       }
       else{
        for(int i=1;i<s.length()-1;i++){
            if(s[i]=='0'){
                f=0;
                break;
            }
        }
       }
       if(f){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}