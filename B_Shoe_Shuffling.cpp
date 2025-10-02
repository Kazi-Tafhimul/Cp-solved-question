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
        vector<int>a(n),b(n),v;

        map<int ,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=i+1;
        }
        int ans = 0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                v.push_back(b[i+1]);
                swap(b[i],b[i+1]);
                mp[i]++;
                mp[i+1]++;
               
            }
            else{
                if(mp[i]!=0){
                    v.push_back(b[i]);
                }
                else{
                    ans=1;
                    break;
                }
            }
        }
        if(mp[n-1]!=0){
            v.push_back(b[n-1]);
        }
        else{
            ans=1;
        }
        if(ans){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}