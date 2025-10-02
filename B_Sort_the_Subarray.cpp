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
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        ll left=-1,right=-1;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                left=i+1;
            }

        }
        for(int i=n-1;i>=0;i--){
            if(a[i]!=b[i]){
                right=i+1;
            }
        }
        for(int i=left-1;i>0;i--){
            if(b[i]>=b[i-1]){
                left--;
            }
            else{
                break;
            }
        }
        for(int j=right-1;j<(n-1);j++){
            if(b[j]<=b[j+1]){
                right++;
            }
            else{
                break;
            }
        }
        cout<<left<<" "<<right<<endl;
    }
    return 0;
}