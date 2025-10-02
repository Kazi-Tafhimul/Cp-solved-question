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
        int arr[n+1];
        int l=1;
        int r=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                break;
            }
            l++;
        }
        for(int i=n-2;i>=0;i--){
            if(arr[i]!=arr[i+1]){
                break;
            }
            r++;
            


        }
        int s=0;
        if(arr[0]==arr[n-1]){
            s=min(n,r+l);
        }
        else{
            s=min(n,max(r,l));
        }
        cout<<n-s<<endl;
    }
    return 0;
}