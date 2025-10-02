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
        ll n;
        cin>>n;
        vector<ll>x(n),y(n);
        vector<pair<ll,ll>>dfr(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }
        for(int i=0;i<n;i++){
            dfr[i].first = y[i] - x[i];
            dfr[i].second = i;
        }
        sort(dfr.rbegin(),dfr.rend());
        ll j=n-1,cnt=0;
        for(int i=0;i<n;i++){
            while(i<j && dfr[i].first+dfr[j].first<0){
                j--;
            }
            if(i>=j){
                break;
            }
            cnt++;
            j--;

        }
        cout<<cnt<<endl;

    }
    return 0;
}