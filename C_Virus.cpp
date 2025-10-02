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
        ll n,m;
        cin>>n>>m;
        vector<ll>a(m);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<ll>v;
        v.push_back(a[0]-1+n-a[m-1]);
        for(int i=0;i<m-1;i++){
            v.push_back(a[i+1]-a[i]-1);

        }
        ll day=0,save=0,ans;
        sort(v.begin(),v.end());
        for(int i=m-1;i>=0;i--){
            if(v[i]<=2*day){
                break;
            }
            else if(v[i]-2*day==1){
                day++;
                save++;

            }
            else{
                save+=v[i]-2*day-1;
                day+=2;
            }
            
        }
        cout<<n-save<<endl;
       

    }
    return 0;
}