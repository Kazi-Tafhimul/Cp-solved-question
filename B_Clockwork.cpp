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
        vector<ll>v(n);
        int f=1;
        for(int i=0;i<v.size();i++){
            cin>>v[i];
        }
        for(int i=0;i<v.size();i++){
            if(i==0){
                int d = (v.size()-1)*2;
                if(d>=v[i]){
                    f=0;
                    break;

                }
            }
            else if(i==v.size()-1){
                   int d = (v.size()-1)*2;
                if(d>=v[i]){
                    f=0;
                    break;

            }
            
        }
        else{
                int d1 = i*2;
                int d2 = ((v.size()-1)-i)*2;
                int d  = max(d1,d2);
                if(d>=v[i]){
                    f=0;
                    break;
                }
            }
       
    }
     if(f)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}