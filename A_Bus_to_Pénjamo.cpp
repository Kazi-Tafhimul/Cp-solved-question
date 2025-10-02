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
        int n,r;
        cin>>n>>r;
        int np=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            np+=a[i];

        }
        int ns = 2*r;
        int vac = ns-np;

        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                
            }

        }
    }
    return 0;
}