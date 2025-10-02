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
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>last(k,-1),max_step(k),max2_step(k);
        for(int i=0;i<n;i++){
            ll step = i-last[v[i]-1];
            if(step>max_step[v[i]-1]){
                max2_step[v[i]-1] = max_step[v[i]-1];
                max_step[v[i]-1] = step;
            }
            else if(step>max2_step[v[i]-1]){
                max2_step[v[i]-1] = step;

            }
            last[v[i]-1] = i;
        }
        for(int i=0;i<k;i++){
            ll step = n-last[i];
            if(step>max_step[i]){
                max2_step[i] = max_step[i];
                max_step[i] = step;
            }
            else if(step>max2_step[i]){
                max2_step[i] = step;
            }
        }
        ll ans = LLONG_MAX;
        for(int i=0;i<k;i++){
            ans = min(ans,max((max_step[i]+1)/2,max2_step[i]));
        }
        cout<<ans-1<<endl;


    }
    return 0;
}