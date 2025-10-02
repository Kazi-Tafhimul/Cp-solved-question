#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
const int mx=54;
vector<int>adj[mx];
bool vis[mx];
void dfs(int u){
    vis[u]=1;
    for(auto v:adj[u]){
        if(!vis[v]){
            dfs(v);
        }

    }

}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    int c=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            c++;

        }
    }

    cout<<(ll)pow(2,n-c)<<endl;

    
    return 0;
}