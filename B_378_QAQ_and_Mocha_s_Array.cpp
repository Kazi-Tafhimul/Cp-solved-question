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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        sort(v.begin(),v.end());
        vector<int>b;
        for(int i=0;i<n;i++){
            if(v[i]%v[0]!=0)b.push_back(v[i]);

        }
        bool good = true;
        for(int i=0;i<b.size();i++){
            if(b[i]%b[0]!=0)good=false;

        }
        cout<<(good?"Yes":"No")<<endl;
    }
    return 0;
}