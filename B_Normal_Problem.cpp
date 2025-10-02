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
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='p'){
                s[i]='q';
            }
            else if(s[i]=='q'){
                s[i]='p';
            }

        }
         for(int i=s.length()-1;i>=0;i--){
            cout<<s[i];

        }
        cout<<endl;

    }
    return 0;
}