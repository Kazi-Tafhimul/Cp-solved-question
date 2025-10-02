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
    int a[n];
    map<int,vector<int>>mp;
    for(int i =0;i<n;i++){
        cin>>a[i];
        mp[a[i]].push_back(i);
    }
    vector<vector<int>>v;
    for(auto it:mp){
        v.push_back(it.second);
    }
    sort(v.begin(),v.end());
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        string s ;
        cin>>s;
        if(s.length()!=n){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            map<char,vector<int>>mp1;
            for(int j=0;j<s.length();j++){
                mp1[s[j]].push_back(j);
            }
            vector<vector<int>>v1;
            for(auto it:mp1){
                v1.push_back(it.second);
            }
            sort(v1.begin(),v1.end());
            if(v==v1)cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }
        }

    }
  
    }


     return 0;
}
