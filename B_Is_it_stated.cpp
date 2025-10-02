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
        string s;
        cin>>s;
        if(s.find("it")!=-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}