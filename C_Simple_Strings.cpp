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
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            s[i]='a';
            while(s[i]==s[i-1] || s[i]==s[i+1]){
                s[i]++;
            }
        }
    }
    cout<<s<<endl;

    return 0;
}