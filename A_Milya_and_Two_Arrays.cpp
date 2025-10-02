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
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int u1,u2;
        sort(a.begin(),a.end());
         sort(b.begin(),b.end());
         u1 = unique(a.begin(),a.end())-a.begin();
         u2 = unique(b.begin(),b.end())-b.begin();
         if(u1+u2>3)cout<<"YES"<<endl;
         else{
            cout<<"NO"<<endl;
         }






    }
    return 0;
}