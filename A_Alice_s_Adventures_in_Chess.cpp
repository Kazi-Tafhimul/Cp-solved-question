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
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int x=0,y=0;
        while(s.size()<=100){
            s+=s;
        }
        int f=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='N')y++;
                else if(s[i]=='S')y--;
                else if(s[i]=='E')x++;
                else if(s[i]=='W')x--;
                if(x==a && y==b){
                    f=1;
                    break;


                }

            }
            if(f)cout<<"YES"<<endl;
            
            else{
                cout<<"NO"<<endl;
            }

    }
        
    
    return 0;
}