#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const double eps = 1e-9;
#define gcd(a, b) __gcd(a, b)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)
#define mem(a, b) memset(a, b, sizeof(a))
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n][n];
        vector<int> v(2 * n + 1, 0);
        int sum = (2 * n * (2 * n + 1)) / 2;
        int rsum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (v[i + j + 2] == 0)
                {
                    v[i + j + 2] = arr[i][j];
                    rsum += arr[i][j];
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        cout << sum - rsum << " ";
        for (int i = 2; i <= 2 * n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}