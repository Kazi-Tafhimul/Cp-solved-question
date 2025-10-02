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
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        int count = 0,ans = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count++;
                if(count==m){
                    ans++;
                    count=0;
                    i+=k-1;
                }

            }
            else{
                count=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}