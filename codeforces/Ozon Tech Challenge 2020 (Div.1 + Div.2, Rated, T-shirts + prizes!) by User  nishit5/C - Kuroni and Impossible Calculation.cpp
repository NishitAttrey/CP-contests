
1305 C - Kuroni and Impossible Calculation.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long 
using ldb = long double;
using pa = pair < int, int >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, N = 5e5 + 10;
const int LINF = LLONG_MAX;
int n,m;
// ll int modpow(int x, int y){
//     int ans=1;
//     if(y==1){
//         return x%MOD;
//     }
//     x=x % MOD;
//     y=y % (MOD-1);
//     while(y){
//         if(y & 1){
//             ans = (ans*x) %MOD;
//         }
//         x *= x;
//         x = x % MOD;
//         y >>= 1;
//     }
//     return ans;
// }

// int modinv(int x){
//     return modpow(x,MOD-2);
// }
int sub(int x, int y) {
    x -= y;
    if (x < 0) return x + MOD;
    return x;
}
int add(int x, int y) {
    x += y;
    if (x >= MOD) return x - MOD;
    return x;
}
int multiply(int a,int b){
    return (a*b)%m;
}

int32_t main() {
    fast();
    cin >> n >> m;
    vector<int>q(n);
    f(i,0,n){
     	cin >> q[i];      
    }
    if(n>m){
    	cout<<0<<endl;
    	return 0;
    }
    int ans=1;
    f(i,0,n){
     	f(j,0,i){
     	      ans=multiply(ans,abs(q[i]-q[j]));       
     	}      
    }
    cout<<ans<<endl;

    return 0;
}
 