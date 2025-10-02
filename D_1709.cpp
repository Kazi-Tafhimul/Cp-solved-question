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
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<ll,ll>>ans;
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(a[j-1]>a[j]){
                    swap(a[j-1],a[j]);
                    ans.push_back({1,j});
                }
            }
        }
          for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(b[j-1]>b[j]){
                    swap(b[j-1],b[j]);
                    ans.push_back({2,j});
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                swap(a[i],b[i]);
                ans.push_back({3,i+1});
            }
        }
        cout<<ans.size()<<endl;
        for(auto u:ans){
            cout<<u.first<<" "<<u.second<<endl;
        }
    }
    return 0;
}