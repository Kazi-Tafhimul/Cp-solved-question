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
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll f=0;
        ll mn = LLONG_MAX;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<0){
                f=1;
                break;

            }
            else{
                mn = min(mn,(a[i]-a[i-1]));

            }
        }
        if(f){
            cout<<0<<endl;
        }
        else{
            cout<<mn/2+1<<endl;
        }
    }
    return 0;
}