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
        char c;
        cin>>c;
        string s;
        cin>>s;
        vector<ll>pos;
        for(int i=0;i<n;i++){
            if(s[i]!=c){
                pos.push_back(i+1);
            }
        }
        ll sz = pos.size();
        if(sz==0){
            cout<<0<<endl;
        }
        else{
            vector<ll>cnt(n+1,0);
            for(auto x:pos){
                for(int i=1;i*i<=x;i++){
                    if(x%i==0){
                        cnt[i]++;
                        cnt[x/i]++;
                    }
                }
            }
            bool found = false;
            ll id =-1;
            for(int i=1;i<=n;i++){
                if(cnt[i]==0){
                    found = true;
                    id = i;
                    break;
                }

            }
            if(found){
                cout<<1<<endl;
                cout<<id<<endl;

            }
            else{
                cout<<2<<endl;
                cout<<n<<" ";

                ll temp;
                for(int i=1;i<n;i++){
                    if(n%i!=0){
                        temp=i;
                        break;
                    }
    
                }
                cout<<temp<<endl;
            }
        }
    }
    return 0;
}