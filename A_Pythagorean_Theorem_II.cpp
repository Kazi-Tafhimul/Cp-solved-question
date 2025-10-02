#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    char tmp=s[0];
    int l=s.size();
    for(int i=0;i<l;i++){
        int dg = s[i]-'0';
        int rdg  = 9 - dg;
        if(i==0 && rdg==0){
            continue;
        }
        if(rdg<dg){
            s[i]=rdg+'0';
        }
       
    }
    for(int i=0;i<l;i++){
            cout<<s[i];
        }

    return 0;
}