#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const double eps = 1e-9;
#define gcd(a, b) __gcd(a, b)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)
#define mem(a, b) memset(a, b, sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        set<ll>s;
        ll e=0,o=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)e++;
            else{
                o++;
            }
        }
        if(o>0 && e>0)cout<<2<<endl;
        else{
            ll r =2;
            
            ll rem;
            while(1){
                s.clear();
                for(int i=0;i<n;i++){
                    rem = a[i]%r;
                    s.insert(rem);



                }
                if(s.size()==2){
                  
                   
                    cout<<r<<endl;
                    break;
                }
                else{
                    r=r*2;
                }
            }
            
        }
    }
    return 0;
}