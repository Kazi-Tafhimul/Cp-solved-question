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
        string s;
        cin >> s;
        int a = s[0] - '0';
        int b = s[1] - '0';
        int c = s[2] - '0';
        int d = s[3] - '0';
        if (a == 0)
            a = 10;
        if (b == 0)
            b = 10;
        if (c== 0)
            c = 10;
        if (d == 0)
            d = 10;
            cout<<abs(1-a)+1+abs(a-b)+1+abs(b-c)+1+abs(c-d)+1<<endl;
    }
    return 0;
}