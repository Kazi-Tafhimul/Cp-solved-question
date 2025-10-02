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
        string s;
        cin>>s;
        vector<int>v(n);
        bool win=false;
        for(int i=0;i<n;i++){
            if(s[i]=='1')v[i]=1;
        }
        if(v[0]||v[n-1])win=true;
        else{
            for(int i=1;i<n;i++){
                if(v[i] && v[i-1]){
                    win = true;
                    break;
                    
                }
            }

        }
        
            if(win){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        


    
    return 0;
}