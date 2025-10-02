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
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>ans(n,1);
        vector<int>b(101,0);
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        bool two =false,three=false;
        for(int i=0;i<n;i++){
            b[a[i]]++;
            if(b[a[i]]==2){
            if(!two){
                ans[i]=2;
                two=1;
                
            }
            else if(!three){
                ans[i]=3;
                three=1;
            }

            }

        }
        if(three==false){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
