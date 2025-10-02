#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 1e5+123;
int a[mx];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(q--){
        int x;
        cin>>x;
        int l=0,r=n-1;
        int ans =-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid]==x)ans=mid;
            if(a[mid]>=x){
                r=mid-1;

            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}