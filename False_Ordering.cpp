#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))


int nod [1123];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int lim = 1e3;
    for(int i=1;i<=lim;i++){
        for(int j=i;j<=lim;j+=i){
            nod[j]++;
        }
    }
    vector<pair<int,int>>v;
    for(int i=1;i<=lim;i++){
        v.push_back({nod[i],-i});
    }
    sort(v.begin(),v.end());
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        int n;
        cin>>n;
        cout<<"Case "<<tc<<": "<<(v[n-1].second*-1)<<endl;
    }

    
    return 0;
}
