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
        string s;

        cin>>s;
        vector<int>digits(s.size());
        for(int i=0;i<s.size();i++){
            digits[i]=s[i]-'0';

        }
        for(int i=1;i<s.size();i++){
            int ind = i;
            while(ind>=1 && digits[ind]>0 && digits[ind]>digits[ind-1]+1){
                int val = digits[ind];
                digits[ind] = digits[ind-1];
                digits[ind-1] = val-1;
                if(ind>1){
                    ind--;
                }
                else{
                    break;
                }

            }
        }
        string res;
        for(int d:digits){
            res+=to_string(d);

        }
        cout<<res<<endl;
    }
    return 0;
}