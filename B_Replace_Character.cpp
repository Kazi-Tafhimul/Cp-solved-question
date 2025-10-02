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
        int l;
        cin>>l;
        string s;
        cin>>s;
        vector<int>f(26);
        for(int i=0;i<s.size();i++){
            f[s[i]-'a']++;
        }
        char mx = s[0], mn = s[0];
        for(int i=0;i<26;i++){
            if(f[i]>=f[mx - 'a'])mx = 'a'+i;
            if(f[25-i]<=f[mn - 'a'] && f[25-i])mn = 'a' + (25-i);

        }
        for(int i=0;i<l;i++){
            if(s[i]==mn){
                s[i]=mx;
                break;
            }

        }
        cout<<s<<endl;


    }

    return 0;
}