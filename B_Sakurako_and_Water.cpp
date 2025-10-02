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
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int i=0, j=0,mn=0,ans=0;
        
        while(i<n && j<n){
            mn = min(arr[i][j],mn);
            i++,j++;
        }
        ans+=abs(mn);
        for(int j=1;j<n;j++){
            int mnm = 0;
            i=0;
           int x=j;
            while(i<n && x<n){
                mnm = min(arr[i][x],mnm);
                i++,x++;
            }
            ans+=abs(mnm);
        }
        for(int i=1;i<n;i++){
            int m=0;
            j=0;
            int y=i;
            while(y<n && j<n){
                m = min(arr[y][j],m);
                y++,j++;
            }
            ans+=abs(m);
        }
        cout<<ans<<endl;


    }
    return 0;
}