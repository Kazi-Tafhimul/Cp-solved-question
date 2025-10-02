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
        int  n,m,k;
    cin>>n>>m>>k;
    vector<int>a(m);
    vector<int>b(k);
    vector<int>res(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        cin>>b[i];
    }
    if(k==n){
        for(int i=0;i<m;i++){
            res[i]=1;
        }
    }
    else if(k==n-1){
        int dk = 1;
        for(int x:b){
            if(dk==x){
                dk++;
            }

        }
        for(int i = 0; i < m ; i ++){
            if(a[i] == dk){
                res[i] = 1;
            }
            
        }

    }
    for(int i=0;i<m;i++){
        cout<<res[i];
    }
    cout<<endl;


    }
    

    


    return 0;
}