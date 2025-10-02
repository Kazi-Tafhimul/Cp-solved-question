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
        string s, ans;
        int B=0, b=0;
        cin >> s;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                B++;
            }
            else if (s[i] == 'b')
            {
                b++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z' && B)
            {
                B--;
            }
            else if (s[i] >= 'a' && s[i] <= 'z' && b)
            {
                b--;
            }
            else
            {

                ans+=s[i];
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}