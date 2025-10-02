#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const double eps = 1e-9;
#define gcd(a,b) __gcd(a,b)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    

    double a[3][3] = {
        {83, 11, -4},
        {3, 8, 29},
        {7, 52, 13}
    };
    double b[3] = {95, 71, 104};

    double x[3] = {0, 0, 0}; 
    double x_new[3];
    double tol = 1e-4;
    int max_iter = 100, iter = 0;

    while (iter < max_iter)
    {
        x_new[0] = (b[0] - a[0][1]*x[1] - a[0][2]*x[2]) / a[0][0];
        x_new[1] = (b[1] - a[1][0]*x[0] - a[1][2]*x[2]) / a[1][1];
        x_new[2] = (b[2] - a[2][0]*x[0] - a[2][1]*x[1]) / a[2][2];

        if (fabs(x_new[0] - x[0]) < tol &&
            fabs(x_new[1] - x[1]) < tol &&
            fabs(x_new[2] - x[2]) < tol)
            break;

        x[0] = x_new[0];
        x[1] = x_new[1];
        x[2] = x_new[2];
        iter++;
    }

    fraction();
    cout << "Solution using Jacobi's Method after " << iter << " iterations:" << endl;
    cout << "x = " << x[0] << endl;
    cout << "y = " << x[1] << endl;
    cout << "z = " << x[2] << endl;

    return 0;
}
