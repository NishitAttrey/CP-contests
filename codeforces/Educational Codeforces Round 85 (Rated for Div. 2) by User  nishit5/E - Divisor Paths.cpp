
1334 E - Divisor Paths.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long 
using ldb = long double;
using pa = pair < int, int >;
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
const int MOD = 998244353, N = 5e5 + 10;
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
int modinv(int x){
    return modpow(x,MOD-2);
}
int add(int x, int y) {
    x += y;
    if (x >= MOD) return x - MOD;
    return x;
}
int multiply(int a,int b){
    return (a*b)%MOD;
}
int fact[60],invfact[60];
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fact[0] = 1;
    invfact[0] = 1;
    f(i,1,55){
        fact[i] = multiply(fact[i-1],i);
        invfact[i] = modinv(fact[i]);
    }
    int d,q;
    cin >> d >> q;
    vector<int>factor;
    for(int i = 2;i*i <=d;i++){
        if(d%i == 0){
            factor.push_back(i);
            while(d%i == 0){
                d /= i;
            }
        }
    }
    if(d > 1){
        factor.push_back(d);
    }
    while(q--){
        int u,v;
        cin >> u >> v;
        int s1 = 0,s2 = 0;
        vector<int>a1,a2;
        for(auto s : factor){
            int va = 0;
            while(u%s == 0){
                va++;
                u /= s;
            }
            while(v%s == 0){
                v /= s;
                va--;
            } 
            if(va > 0){
                s1 += va;
                a1.push_back(va);
            }
            else if(va < 0){
                s2 += -va;
                a1.push_back(-va);
            }
        }
        int ans = fact[s1];
        for(auto s : a1){
            ans = multiply(ans,invfact[s]);
        }
        ans = multiply(ans,fact[s2]);
        for(auto s : a2){
            ans = multiply(ans,invfact[s]);
        }
        cout << ans << "\n";
        
    }
    return 0;
}
 