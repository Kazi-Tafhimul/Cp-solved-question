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
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];

        }
        sort(arr,arr+2*n);
        int nz=0, no=0;
        for(int i=0;i<2*n;i++){
            if(arr[i]==0){
                nz++;

            }
            else{
                no++;
            }
        }
        int np=0;
        for(int i=0;i<2*n;i+=2){
            if(arr[i]==0 && arr[i+1]==1){
                np++;

            }

        }
        cout<<np<<" "<<min(no,nz)<<endl;
    }
    return 0;
}