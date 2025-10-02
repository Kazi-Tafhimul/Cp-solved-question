#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            mp[k]++;
        }
        for(int i=0;i<=n;i++){
            if(mp[i]==0){
                cout<<i<<endl;
                break;
            }
            mp[i+x]+=mp[i]-1;
        }
    }
    return 0;
}