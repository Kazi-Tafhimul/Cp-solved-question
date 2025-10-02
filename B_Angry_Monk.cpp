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
        int n,k;
        cin>>n>>k;
        vector<int>v(k);
        int op1=0,op2=0;
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k-1;i++){
            if(v[i]>1){
                op1+=v[i]-1;
                op2+=v[i];

            }
            else{
                op2+=v[i];
            }


        }
        

            
        
        cout<<op1+op2<<endl;

    }
    return 0;
}
