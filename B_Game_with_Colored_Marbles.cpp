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
        vector<int>c(n);
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
       
       vector<int>cnt(1e5);
       for(auto x: c){
        cnt[x]++;
       }
       int o1 = 0 ,m1=0;
       for(auto x : cnt){
        if(x==1)o1++;
        else if(x>1)m1++;
       }
       cout<<(o1 + 1 ) / 2 * 2 + m1<<endl;


    }
    return 0;
}