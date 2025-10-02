#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
bool checkFair(ll n){
    string s = to_string(n);
    for(int i=0;i<s.length();i++){
        if(s[i]!='0' && n%(s[i]-'0')!=0)return false;
        
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        while(!checkFair(n)){
            n++;
        }
        cout<<n<<endl;

    }
    return 0;
}