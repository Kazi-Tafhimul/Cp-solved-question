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
        vector<pair<ll,ll>>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second = i+1;
        }
        sort(a.begin(),a.end());
        ll cnt=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i].first*a[j].first==a[i].second+a[j].second)cnt++;
                if(a[i].first*a[j].first>2*n)break;
            }

        }
        cout<<cnt<<endl;
    }
    return 0;
}