
1327 E - Count The Blocks.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long 
using ldb = long double;
using pa = pair < int, int >;
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
const int MOD = 998244353 , N = 3e5 + 10;
const int LINF = LLONG_MAX;

int modpow(int x, int y){
    int ans=1;
    if(y==1){
        return x%MOD;
    }
    x=x % MOD;
    y=y % (MOD-1);
    while(y>0){
        if(y & 1){
            ans = (ans*x) %MOD;
        }
        x *= x;
        x = x % MOD;
        y >>= 1;
    }
    return ans;
}
int add(int x, int y) {
    x += y;
    if (x >= MOD) return x - MOD;
    return x;
}
int multiply(int a,int b){
    return (a*b)%MOD;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	int n;
 	cin >> n;
 	f(i,1,n){
 		int ans1 =modpow(10,n-i-1);
 		ans1 = multiply(ans1,2);
 		ans1 = multiply(ans1,9);
 		int ans2 = modpow(10,n-i-2);
 		ans2 = multiply(ans2,81);
 		ans2 = multiply(n-i-1,ans2);
 		// cout << ans1 << " " << ans2 << endl;
 		ans1 = multiply(10,add(ans1,ans2));
 		cout << ans1 << " ";
 	}   
 	cout << 10 << endl;
    return 0;
}
 