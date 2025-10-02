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
        int n;
        cin>>n;
        int x = n-2;
        set<int>s;
        while(n--){
            int a;
            cin>>a;
            s.insert(a);
        }
        for(auto i:s){
            if(x%i==0){
                if(s.count(x/i)){
                    cout<<i<<" "<<x/i<<endl;
                    break;
                }
            }
        }

    }
    return 0;
}