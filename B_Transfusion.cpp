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
        vector<ll>v(n);
        vector<ll>odd;
        vector<ll>even;
        for(int i=0;i<n;i++){
            cin>>v[i];
            

        }
        for(int i=0;i<n;i++){
            if((i+1)%2==0){
                even.push_back(v[i]);

            }
            else{
                odd.push_back(v[i]);
            }
        }
        ll os = odd.size();
        ll es = even.size();
        ll sum_odd=0,sum_even=0;
        for(int i=0;i<odd.size();i++){
            sum_odd+=odd[i];
        }
        for(int i=0;i<even.size();i++){
            sum_even+=even[i];
        }
        if(sum_even%es==0 && sum_odd%os == 0 && sum_even/es==sum_odd/os){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}