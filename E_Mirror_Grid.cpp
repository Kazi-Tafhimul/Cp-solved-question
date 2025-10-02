#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int arr[n+1][n+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                char c;
                cin>>c;
                arr[i][j] = c-'0';

                

            }
        }
        int ans=0;
        
        int exp = n-2;
        for(int i=1;i<=n/2;i++,exp-=2){
            for(int j=0;j<=max(0,exp);j++){
                int one=0;
                int zero = 0;
                if(arr[i][i+j]==1)one++;
                else zero++;
                if(arr[i+j][n-i+1]==1)one++;
                else zero++;
                if(arr[n-i+1][n-i+1-j]==1)one++;
                else zero++;
                if(arr[n-i+1-j][i]==1)one++;
                else zero++;
                ans+=min(4-one,4-zero);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}