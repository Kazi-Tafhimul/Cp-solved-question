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
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        vector<ll>ans;
        int f=1;
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        if(n==k){
            for(int i=1;i<n;i+=2){
                ans.push_back(a[i]);

            }

        }
        else if(n>k){
            
      
        }
        ans.push_back(0);
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=i+1){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    
    return 0;
}