#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    if(a+b==3)cout<<3<<endl;
    else if(a+b==4)cout<<2<<endl;
    else{
        cout<<1<<endl;
        
    }

    return 0;
}