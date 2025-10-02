#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 2e4+123;
bool vis[mx];
vector<int>adj[mx];
bool node[mx];
int cnt,c;
void dfs(int u,int color){
    vis[u]=1;
    if(color==1)c++;
    int tmp;
    if(color==1)tmp=2;
    else{
        tmp=1;
    }
    for(auto v:adj[u]){
        if(vis[v]==0){
            dfs(v,tmp);
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){

    }
    
    return 0;
}