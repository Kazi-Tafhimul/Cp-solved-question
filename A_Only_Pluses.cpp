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
        vector<int>v(3);
        for(int i=0;i<3;i++){
            cin>>v[i];

        }
        int op=1;
        while(op<=5){
            sort(v.begin(),v.end());
            v[0]+=1;
            op++;

        }
        int mul=1;
        for(int i=0;i<3;i++){
            mul*=v[i];

        }
        cout<<mul<<endl;

    }


    
    return 0;
}