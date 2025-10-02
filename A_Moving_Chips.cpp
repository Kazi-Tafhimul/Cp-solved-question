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
        int n,l,r,c;
        l=r=c=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                l=i;
                break;
            }

        }
         for(int i=n-1;i>=0;i--){
            if(arr[i]==1){
                r=i;
                break;
            }

        }
        for(int i=l;i<=r;i++){
            if(arr[i]==0){
                c++;
            }
        }
        cout<<c<<endl;


    }
    return 0;
}