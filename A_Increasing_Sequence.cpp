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
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]>=2){
            b[0]=1;
        }
        else{
            b[0]=2;
        }
        for(int i=1;i<n;i++){
            if(a[i]==b[i-1]+1){
                b[i]=b[i-1]+2;
            }
            else{
                b[i]=b[i-1]+1;
            }

        }
        cout<<b[n-1]<<endl;
        
        
    }
    return 0;
}