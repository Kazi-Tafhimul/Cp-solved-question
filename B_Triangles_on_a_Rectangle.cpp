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
        ll w,h,k;
        cin>>w>>h;
        cin>>k;
        vector<ll>h1(k);
        for(int i=0;i<k;i++){
            cin>>h1[i];
        }
        cin>>k;
        vector<ll>h2(k);
        for(int i=0;i<k;i++){
            cin>>h2[i];
        }
        cin>>k;
        vector<ll>v1(k);
        for(int i=0;i<k;i++){
            cin>>v1[i];
        }
        cin>>k;
        vector<ll>v2(k);
        for(int i=0;i<k;i++){
            cin>>v2[i];
        }
        ll max1 = max(h*(h1[h1.size()-1]-h1[0]),h*(h2[h2.size()-1]-h2[0]));
        ll max2 = max(w*(v1[v1.size()-1]-v1[0]),w*(v2[v2.size()-1]-v2[0]));
        cout<<max(max1,max2)<<endl;
       
    }
    return 0;
}