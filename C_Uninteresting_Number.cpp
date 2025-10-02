#include <bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
const double eps = 1e-9;
#define gcd(a, b) __gcd(a, b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield)
#define mem(a, b) memset(a, b, sizeof(a))

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool f = false;  // Flag to track if a valid condition is met
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] <= '3') {  // Check if character is 0, 1, 2, or 3
                int digit = s[i] - '0';  // Convert character to integer
                int squared = digit * digit;  // Square the digit
                
                // Create a new string with the modified digit
                string new_s = s;
                new_s[i] = (squared + '0');  // Replace the character with the squared value
                
                // Check if the number is divisible by 9
                int n = stoi(new_s);  // Convert the string to an integer
                if (n % 9 == 0) {
                    f = true;  // Set the flag to true
                    break;
                }
            }
        }

        
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
