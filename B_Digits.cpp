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
        ll n,d;
        cin>>n>>d;
        vector<int>ans;
        ans.push_back(1);
        if(d%3==0 || n>=3){
            ans.push_back(3);
        }
        if(d==5){
            ans.push_back(5);
        }
        if(d==7 || n>=3){
            ans.push_back(7);
        }
        if(d%9==0){
            ans.push_back(9);
        }
        else if(d%3==0){
            if(n>=3){
                ans.push_back(9);
            }
        }
        else{
            if(n>=6){
                ans.push_back(9);
            }
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;

    }
    return 0;
}