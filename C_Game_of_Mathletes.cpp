#include <bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        map<int, int> m;
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]]++;
        }

        int ans = 0;

        for (auto& x : m) {
            int target = 15 - x.first;
            
            
            if (m.count(target) && x.first < target) {
                int pairs = min(m[x.first], m[target]);
                ans += pairs;
                
               
                m[x.first] -= pairs;
                m[target] -= pairs;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
