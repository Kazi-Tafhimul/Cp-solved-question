#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))

const int mx = 4000+123;
bool vis[mx];
vector<int> adj[mx];
ll ans;
vector<ll>white,black;

void dfs ( ll current,ll p)
{
   // vis[u] =  1;

    for ( auto v : adj[current] ) {
         if ( v == p ) {
            continue;
        }
        dfs(v,current);
        white[current] += white[v];
        black[current]+=black[v];
    }
    ans+=(white[current]==black[current]);

    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ans=0;

       

        for(int i=1;i<=n;i++){
            adj[i].clear();

        }
        black.assign(n+1,0);
        white.assign(n+1,0);
        for(int i=2;i<=n;i++){
            ll x;
            cin>>x;
            adj[x].push_back(i);
        }
        string s;
        cin>>s;
        for(int i=1;i<=s.size();i++){
            if(s[i-1]=='B'){
                black[i] = 1;
            }
            else{
                white[i]=1;
            }

        }
        dfs(1,-1);
        cout<<ans<<endl;

    }
    
    return 0;
}