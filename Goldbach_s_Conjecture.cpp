#include<bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define ll long long
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 1e6+123;
bitset<mx>isPrime;
vector<int>primes;
void primeGen(int n){
    for(int i=3;i<=n;i+=2)isPrime[i]=1;
    int sq = sqrt(n);
    for(int i=3;i<=sq;i+=2){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j] = 0;
            }
        }

    }
    primes.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int lim = 1e6;
    primeGen(lim);
    int n;
    while(cin>>n){
        if(n==0)break;
        bool done = false;
        for(auto p:primes){
            if(p>n){
                break;
            }
            int a = p;
            int b = n-a;
            if(isPrime[b]){
                cout<<n<<" = "<<a<<" + "<<b<<endl;
                done =true;
                break;
            }
        }
        if(!done){
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }
      

        
    }

    
    return 0;
}