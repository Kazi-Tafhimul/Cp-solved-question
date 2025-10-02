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
        int n;
        cin>>n;
        int l=1,r=n;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                cout<<r<<" ";
                r--;
            }
            else{
                cout<<l<<" ";
                l++;
            }

        }
        cout<<endl;
    }
    return 0;
}