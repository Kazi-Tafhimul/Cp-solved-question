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
        vector<int>b(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
           
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
           
        }
        vector<int>rev = a;
        reverse(rev.begin(),rev.end());
        if(a==b||rev==b)cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
        
      
    }
    return 0;
}