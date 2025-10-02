#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    vector<pair<int,int>>vp;
    int c=0;
    for(int i=0;i<s.size();i++){
        vp.push_back({c,i*-1});
        if(s[i]=='(')c++;
        else if(s[i]==')')c--;

        
    }
    sort(vp.begin(),vp.end());
    for(auto u :vp){
        cout<<s[u.second*-1];
    }
    return 0;
}