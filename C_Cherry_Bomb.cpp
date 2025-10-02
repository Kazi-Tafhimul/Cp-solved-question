#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        bool have_x = false;
        ll x = 0;
        bool ok = true;

        
        for (int i = 0; i < n; ++i) {
            if (b[i] != -1) {
                ll s = a[i] + b[i];
                if (!have_x) { have_x = true; x = s; }
                else if (x != s) { ok = false; break; }
            }
        }
        if (!ok) { 
            cout << 0 <<endl; 
            continue; 
        }

        sort(a.begin(), a.end());
        ll maxA = a.back();
        ll minA = a.front();

        if (have_x) {
            
            if (x < maxA || x > minA + k) cout << 0 <<endl;
            else cout << 1 << endl;
        } else {
           
            long long ans = (minA + k) - maxA + 1;
            if (ans < 0) ans = 0;
            cout << ans << endl;
        }
    }
    return 0;
}
