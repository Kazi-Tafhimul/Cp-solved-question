#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int f=1;
        string s;
        cin >> s;
        if(s.length()==1){
            cout<<"NO"<<endl;
        }
        else{

        for (int i = 1; i < s.length(); i++)
        {
            if(s[i]==s[i-1]){
                f=1;
                continue;
            }
            else{
                f=0;
                swap(s[i],s[i-1]);
                break;

            }

        }
        if(f==1){
            cout<<"NO"<<endl;
        }
        else if(f==0){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }

        }
        
    }
    return 0;
}