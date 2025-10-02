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
        int n,m,k;
        cin>>n>>m>>k;
        if(m==1)cout<<"NO"<<endl;
        else{
            int r = n-((n+(m-1))/m);
            if(k>=r)cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}