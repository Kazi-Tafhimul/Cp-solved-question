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
        string s,x,y,z;
        cin>>n>>s;
        set<string>st;
        for(int i=0;i<n;i++){
            x="";

            for(int j=i;j<n;j++){
                x+=s[j];
                st.insert(x);


            }
        }
        vector<string>v;
        for(int i=0;i<26;i++){
            y='a'+i;
            v.push_back(y);
        }
        string ss,ans;
        for(int i=0;i<26;i++){
            z=i+'a';
            for(int j=0;j<26;j++){
                ss=z;
                ss+=j+'a';
                v.push_back(ss);
            }

        }
        string x1,y1,z1;
        for(int i=0;i<26;i++){
            x1=i+'a';
            for(int i=0;i<26;i++){
                y1=x1;
                y1+=i+'a';
                for(int i=0;i<26;i++){
                    z1 = y1;
                    z1+=(i+'a');
                    v.push_back(z1);

                }

            }
        }
        for(int i=0;i<v.size();i++){
           if(st.find(v[i])==st.end()){
            ans = v[i];
            break;
           }
        }
        cout<<ans<<endl;


    }
    return 0;
}