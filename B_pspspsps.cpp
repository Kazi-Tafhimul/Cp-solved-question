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
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool p = false;
        bool x = false;
        if(s[0]=='s')s[0]='.';
        if(s[s.length()-1]=='p')s[s.length()-1]='.';
        for(int i=0;i<s.length();i++){
            if(s[i]=='s')x=true;
            else if(s[i]=='p')p=true;

        }
        if(x==true&&p==true){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }



    }
    return 0;
}