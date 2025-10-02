#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int dx[4] = {1,-1,1,-1};
        int dy[4] = {1,1,-1,-1};
        int a,b;
        cin>>a>>b;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        set<pair<int,int>>st1,st2;
        for(int i=0;i<4;i++){
            st1.insert({x1+dx[i]*a,y1+dy[i]*b});
            st1.insert({x1+dx[i]*b,y1+dy[i]*a});
            st2.insert({x2+dx[i]*a,y2+dy[i]*b});
            st2.insert({x2+dx[i]*b,y2+dy[i]*a});



        }
        int ans =0;
        for(auto x:st1){
            if(st2.find(x)!=st2.end()){
                ans++;

            }
        }
        cout<<ans<<endl;

    }
    return 0;
}