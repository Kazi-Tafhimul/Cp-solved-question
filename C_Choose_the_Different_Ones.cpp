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
        set<int>a,b,c;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=k){
                a.insert(x);
                c.insert(x);
            }
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(x<=k){
                b.insert(x);
                c.insert(x);
            }
        }
        if(c.size()==k&& a.size()>=k/2 && b.size()>=k/2)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}