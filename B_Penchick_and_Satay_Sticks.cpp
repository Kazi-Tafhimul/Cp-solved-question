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
        int n;
        cin>>n;
        int arr[n+10];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        bool f=true;
        for(int i=1;i<=n;i++){
            if(arr[i]==i||arr[i]==i+1||arr[i]==i-1){
                continue;
            }
            else{
                f=false;
                break;
            }

        }
        if(f)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}