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
        string a,b;
        cin>>a>>b;
        int ans=0;
        int m = a.size();
        int n = b.size();
        for(int len =1;len<=min(m,n);len++){
            for(int i=0;i+len<=m;i++){
                for(int j=0;j+len<=n;j++){
                    if(a.substr(i,len)==b.substr(j,len)){
                        ans = max(ans,len);

                    }
                }
            }
        }
        cout<<(m+n)-2*ans<<endl;
    }
    return 0;
}