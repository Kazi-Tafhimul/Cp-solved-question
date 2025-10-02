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
        int n,m,ans=-1;
        string s,x;
        cin>>n>>m>>s>>x;
        
        for(int i=0;i<=5;i++){
            if(s.find(x)!=-1){
                ans=i;
                break;

            }
            else{
                s+=s;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}