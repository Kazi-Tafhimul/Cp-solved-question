#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t ;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int ans =0;
        string s;
        cin>>s;
        for(int i=0;i<n-2;i++){
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
                ans++; i+=2;
            }
            else if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e'){
                ans++;i=i+4;
            }
            else if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
                ans++; i=i+2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}