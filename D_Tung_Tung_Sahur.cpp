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
        string s,a;
        cin>>s>>a;
        vector<pair<int,char>>v,x;
        ll cnt=1,cnt2=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i+1]==s[i]){
                cnt++;
            }
            else{
                
               v.push_back({cnt,s[i]});
               cnt=1;
            }



        }
        v.push_back({cnt,s[s.size()-1]});
        for(int i=0;i<a.size()-1;i++){
            if(a[i+1]==a[i]){
                cnt2++;

            }
            else{
                x.push_back({cnt2,a[i]});
                cnt2=1;
            }
        }
        x.push_back({cnt2,a[a.size()-1]});
        ll f=1;
        if(x.size()!=v.size()){
            cout<<"NO"<<endl;
        }
        else{

            for(int i=0;i<v.size();i++){
                if(x[i].first>2*v[i].first||x[i].first<v[i].first||x[i].second!=v[i].second){
                    f=0;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(f)cout<<"YES"<<endl;
        }
       


    }
    return 0;
}