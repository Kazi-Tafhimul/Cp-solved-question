#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
ll check(vector<ll>v){
    ll i=0,j=v.size()-1,ans = 1;
    while(i<j){
        if(v[i]!=v[j]){
            ans=0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,ans=1;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll a,b;
        ll i=0,j=n-1;
        while(i<j){
            if(v[i]!=v[j]){
                ans=0;
                a = v[i];
                b = v[j];
                break;

            }
            i++;
            j--;
        }
        if(ans==1){
            cout<<"YES"<<endl;
        }
        else{
            vector<ll>v1,v2;
            for(int i=0;i<n;i++){
                if(v[i]==a)continue;
                v1.push_back(v[i]);
            }
            for(int i=0;i<n;i++){
                if(v[i]==b)continue;
                v2.push_back(v[i]);
            }
            ll ans1 = check(v1);
            ll ans2 = check(v2);
            if(ans1==1|| ans2==1){
                cout<<"YES"<<endl;
            } 
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    
    return 0;
}