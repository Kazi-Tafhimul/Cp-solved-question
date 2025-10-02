#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
bool isPerfectSquare(ll n){
    if(n<0){
        return false;
    }
    ll root = sqrt(n);
    return (root * root == n);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v,a;
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        else{
            
        for(int i=1;i<=n;i++){
            if(isPerfectSquare(i)){
                v.push_back(i);
            }
            else{
                a.push_back(i);
            }
        }
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
            
        }

    }
    return 0;
}
