#include<bits/stdc++.h>
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
    
    while(t--) {
        ll n;
        string s;
        cin >> n >> s;
        
        ll cntA = count(s.begin(), s.end(), 'a');
        ll cntB = count(s.begin(), s.end(), 'b');
        
        // Edge cases
        if(cntA <= 1 || cntB <= 1) {
            cout << 0 << endl;
            continue;
        }
        
        ll minOps = LLONG_MAX;
        
        // Strategy 1: Group all 'a's together
        // Try every window of size cntA
        for(int i = 0; i <= n - cntA; i++) {
            ll bCount = 0;
            // Count 'b's in current window [i, i+cntA-1]
            for(int j = i; j < i + cntA; j++) {
                if(s[j] == 'b') {
                    bCount++;
                }
            }
            // bCount = number of swaps needed to group all 'a's in this window
            minOps = min(minOps, bCount);
        }
        
        // Strategy 2: Group all 'b's together  
        // Try every window of size cntB
        for(int i = 0; i <= n - cntB; i++) {
            ll aCount = 0;
            // Count 'a's in current window [i, i+cntB-1]
            for(int j = i; j < i + cntB; j++) {
                if(s[j] == 'a') {
                    aCount++;
                }
            }
            // aCount = number of swaps needed to group all 'b's in this window
            minOps = min(minOps, aCount);
        }
        
        cout << minOps << endl;
    }
    
    return 0;
}