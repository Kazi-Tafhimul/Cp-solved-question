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
        vector<int>v(26);
        string s = "abcdefghijklmnopqrstuvwxyz";
        int n;
        cin>>n;
        int arr;
        string ans;
        for(int i=0;i<n;i++){
            cin>>arr;
            ans+=s[find(v.begin(),v.end(),arr)-v.begin()];
            v[find(v.begin(),v.end(),arr)-v.begin()]++;

            

        }
        cout<<ans<<endl;
    }
    return 0;
}