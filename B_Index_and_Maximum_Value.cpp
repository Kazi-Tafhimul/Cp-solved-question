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
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int mx = *max_element(v.begin(),v.end());
        while(m--){
            char c;
            int l,r;
            cin>>c>>l>>r;
            if(c=='+'&& mx>=l && mx<=r ){
                mx++;
            }
             if(c=='-'&& mx>=l && mx<=r ){
                mx--;
            }
            cout<<mx<<" ";

        }
        cout<<endl;

    }
    return 0;
}