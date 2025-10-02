#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s[3];
    cin>>s[0]>>s[1]>>s[2];
    string mn = "CCC";
    for(int a1=0;a1<3;a1++){
        for(int b1 = 0;b1<3;b1++){
            for(int a2 = 0;a2<3;a2++){
                for(int b2=0;b2<3;b2++){
                    for(int a3=0;a3<3;a3++){
                        for(int b3=0;b3<3;b3++){
                            if((a1==a2 && b1==b2) || (a1==a3 && b1==b3) ||(a2==a3 && b2==b3) )continue;
                            if(abs(a1-a2)<=1 && abs(b1-b2)<=1 && abs(a3-a2)<=1 && abs(b3-b2)<=1){
                                string tmp = "";
                                tmp+=s[a1][b1];
                                tmp+=s[a2][b2];
                                tmp+=s[a3][b3];
                                mn = min(mn,tmp);
                                
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<mn<<endl;

    return 0;
}