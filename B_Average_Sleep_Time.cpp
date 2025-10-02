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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll window_sum=0;
    for(int i=0;i<k;i++){
        window_sum+=v[i];


    }
    ll total_sum=window_sum;
    for(int i=k;i<n;i++){
        window_sum += v[i] - v[i-k];
        total_sum+=window_sum;
    }
    double week = n-k+1;
    fraction();
    cout<<total_sum/week<<endl;

    return 0;
}