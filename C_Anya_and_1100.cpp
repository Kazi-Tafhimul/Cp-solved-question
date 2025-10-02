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
        string s;
        cin>>s;
        int n = s.size();
        int cnt=0;
        for(int i=0;i<n-3;i++){
            if(s.substr(i,4)=="1100")cnt++;
        }
        int q;
        cin>>q;
        while(q--){
            int index,value;
            cin>>index>>value;
            index--;
            for(int i=index-3;i<index+1;i++){
                if(i<0||i+3>=n)continue;
                if(s.substr(i,4)=="1100")cnt--;
            }
            s[index]='0'+value;
             for(int i=index-3;i<index+1;i++){
                if(i<0||i+3>=n)continue;
                if(s.substr(i,4)=="1100")cnt++;
            }
            if(cnt>0)cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }

        }


    }
    return 0;
}