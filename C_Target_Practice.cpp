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
        char a[10][10];
        int po = 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>a[i][j];
                if(a[i][j]=='X'){

                if(i==0||i==9||j==0||j==9){
                    po+=1;
                }
                else if(i==1||i==8||j==1||j==8){
                    po+=2;
                }
                else if(i==2||i==7||j==2||j==7){
                    po+=3;

                }
                else if(i==3||i==6||j==3||j==6){
                    po+=4;
                }
                else if(i==4||i==5||j==4||j==5){
                    po+=5;
                }
                }

            }
        }
        cout<<po<<endl;
    }
    return 0;
}