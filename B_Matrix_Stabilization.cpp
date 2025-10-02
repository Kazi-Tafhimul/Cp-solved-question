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
        int n,m;
        cin>>n>>m;
        int mat[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
        bool ok=true;
        while(ok){
            ok = false;
            int up,down,left,right;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(i>0)up=mat[i-1][j];
                    else up=0;
                    if(j>0)left = mat[i][j-1];
                    else left=0;
                    if(i<n-1)down = mat[i+1][j];
                    else down=0;
                    if(j<m-1)right = mat[i][j+1];
                    else right =0;
                    int max_neighbour = max(max(up,down),max(left,right));
                    if(mat[i][j]>max_neighbour){
                        mat[i][j] = max_neighbour;
                       // ok=true;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        

    }
    return 0;
}