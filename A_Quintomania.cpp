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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int f=1;
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])==5||abs(arr[i]-arr[i+1])==7){
                continue;
            }
            else{
                f=0;
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