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
    string a,b;
    cin>>a>>b;
    int t = a.compare(b);
    if(t==0){
        cout<<a<<endl;
    }
    else if(t>0){
        cout<<b<<endl;
    }
    else{
        cout<<a<<endl;
    }

    return 0;
}