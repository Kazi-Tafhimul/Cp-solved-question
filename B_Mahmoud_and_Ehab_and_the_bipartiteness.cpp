#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))

const int mx = 1e5+123;
bool vis[mx];
vector<int> adj[mx];
ll cnt[2];

void dfs ( ll node, ll prevnode, ll color )
{
    cnt[color]++;

    for(int i=0;i<adj[node].size();i++){
        if(adj[node][i]!=prevnode){
            dfs(adj[node][i],node,!color);
        }
    }
    return;
    
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    for(int i=1;i<n;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    dfs(1,0,0);
    cout<<cnt[0]*cnt[1]-(n-1)<<endl;
    
    return 0;
}