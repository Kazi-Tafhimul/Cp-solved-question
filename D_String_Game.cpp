#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
const int mx=2e5+123;
string s,t;
int n,m;
bool removed[mx];
int a[mx];
bool check(ll val){
    mem(removed,0);
    for(int i=1;i<=val;i++)removed[a[i]-1]=1;
    for(int i=0,j=0;i<n;i++){
        if(removed[i])continue;
        if(s[i]==t[j]){
            j++;
            if(j==m)return true;
        }

    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>s>>t;
    n=s.size();
    m=t.size();
    for(int i=1;i<=n;i++)cin>>a[i];
    int l=0,r=n;
    int ans;
    while(l<=r){
        ll mid=(l+r)/2;
        if(check(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }

    }
    cout<<ans<<endl;
    
    return 0;
}