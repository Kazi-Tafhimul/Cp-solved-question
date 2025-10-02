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
        int n,f=1;
        cin>>n;
        int s[n],e[n];
        for(int i=0;i<n;i++){
            cin>>s[i]>>e[i];
        }
        for(int i=1;i<n;i++){
            if(s[i]>=s[0] && e[i]>=e[0]){
                f=0;
                break;
            }
            else{
                continue;
            }

        }
        if(f==0)cout<<-1<<endl;
        else{
            cout<<s[0]<<endl;
        }
    }
    return 0;
}