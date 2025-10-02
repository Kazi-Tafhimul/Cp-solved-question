#include<bits/stdc++.h>
using namespace std;
const long long mx = 1e4+123;
vector<long long>adj[mx];
long long lev[mx];
void bfs(long long source){
    memset(lev,-1,sizeof(lev));
    lev[source] = 0;
    queue<long long>q;
    q.push(source);
    cout<<"BFS traversal starting from node "<<source<<endl;
    while(!q.empty()){
        long long u = q.front();
        q.pop();
        cout<<u<<" ";
        for(auto v:adj[u]){
            if(lev[v]==-1){
                lev[v] = lev[u]+1;
                q.push(v);

            }
        }
    }
    cout<<endl;



}

int main(){
    long long n,m;
    cin>>n>>m;
    cout<<"Enter edges (u v):";
    for(int i=0;i<m;i++){
        long long u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    long long source;
    cin>>source;
    bfs(source);
    return 0;
}