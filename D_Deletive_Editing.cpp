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
        string s,n,temp;
        cin>>s>>n;
        vector<int>v(26,0);
        for(int i=0;i<n.size();i++){
            v[n[i]-'A']++;
        }
        for(int i=s.size()-1;i>=0;i--){
            if(v[s[i]-'A']>0){
                temp+=s[i];
                v[s[i]-'A']--;
            }
        }
        reverse(temp.begin(),temp.end());
        if(temp==n)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}