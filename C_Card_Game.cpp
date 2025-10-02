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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(s[n-1]=='B' && count(s.begin(),s.end(),'B')>1){
            cout<<"Bob"<<endl;
            
        }
        else if(s[n-2]=='B' && s[0]=='B'){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }

    }
    return 0;
}