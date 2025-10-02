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
        ll index,l2,r2,f=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                index = i;
                f=1;
                break;



            }

        }
        if(f==0){
            cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
        }
        ll len  = s.length()-index , ans;
        

    }
    return 0;
}