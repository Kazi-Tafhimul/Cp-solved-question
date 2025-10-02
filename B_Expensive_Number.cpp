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
        string s;
        cin>>s;
        ll n = s.size();
        ll cnt=0, z=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0' && z==0){
                
                cnt++;

            }
            else if(s[i]!='0' && z==0){
                z=1;
            }
            else if(s[i]!='0' && z==1){
                cnt++;
            }



        }
        cout<<cnt<<endl;
    }
    return 0;
}