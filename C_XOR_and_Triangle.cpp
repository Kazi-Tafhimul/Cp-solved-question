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
        long double x;
        
        cin>>x;
        if(x<=3){
            cout<<-1<<endl;
            continue;
        }
        long double logresult = log2(x);
        ll p = floorl(logresult);
        if(logresult==floor(logresult)){
            cout<<-1<<endl;
            continue;

        }
        if(x==pow(2,p+1)-1){
            cout<<-1<<endl;
            continue;
        }
        else{
           ll y = pow(2,p)-1;
           cout<<y<<endl;
        }
    }
    return 0;
}
