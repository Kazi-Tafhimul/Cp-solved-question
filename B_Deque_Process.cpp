#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)/gcd(a,b)*(b))
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
        deque<ll>d;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            d.push_back(x);
        }
        bool f=true;
        while(!d.empty()){
            if(f){
                if(d.front()>d.back()){
                    cout<<"L";
                    d.pop_front();
                }
                else{
                    cout<<"R";
                    d.pop_back();
                }
                
            }
            else{
                if(d.front()<d.back()){
                    cout<<"L";
                    d.pop_front();
                }
                else{
                    cout<<"R";
                    d.pop_back();
                }
            }
            f=!f;
        }
        cout<<endl;

    }
    return 0;
}