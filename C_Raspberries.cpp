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
        int n,k;
        cin>>n>>k;
        int ans=k,even=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0)even++;
            if(v[i]%k==0)ans=0;
            ans = min(ans,k-v[i]%k);

        }
        if(k==4){
            if(even>=2)ans=0;
            else if(even==1)ans=min(ans,1);
            else{
                ans = min(ans,2);
            }
        }
        cout<<ans<<endl;


    }
    return 0;
}