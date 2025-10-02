#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int ans=0;
        vector<int>v1(n);
        vector<int>v2(m);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<m;i++){
            cin>>v2[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v1[i]+v2[j]<=k){
                    ans++;

                }
            }
        }
        cout<<ans<<endl;


    }
    return 0;
}