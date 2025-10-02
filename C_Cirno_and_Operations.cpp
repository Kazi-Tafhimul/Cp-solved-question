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
        ll sum = 0,rsum=0,nsum=0;
        for(int i=0;i<v.size();i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<v[0]<<endl;
        }
        else{
            for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        int r=0,nr=0;
     
        while(v.size()>1){
            rsum=0;
            r=0,nr=0;
            for(int i=1;i<v.size();i++){
            if(v[i-1]>v[i])r++;
            else{
                nr++;
            }


        }
        if(r>nr){
            reverse(v.begin(),v.end());
         
        }
        for(int i=0;i<v.size()-1;i++){
            v[i] = v[i+1]-v[i];
            rsum+=v[i];

        }
        v.pop_back();
        if(rsum>nsum){
            nsum=rsum;

        }
            
            
        }
        if(nsum>sum)cout<<nsum<<endl;
        else{

            cout<<sum<<endl;
        }

        }

         

    }
    return 0;
}