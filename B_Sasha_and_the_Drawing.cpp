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
        int n,k;
        cin>>n>>k;
        int h=n+n-2;
        if(k<=2*h){
            cout<<(k+1)/2<<endl;
        }
        else{
            cout<<h+(k-2*h)<<endl;
        }

    }
    return 0;
}