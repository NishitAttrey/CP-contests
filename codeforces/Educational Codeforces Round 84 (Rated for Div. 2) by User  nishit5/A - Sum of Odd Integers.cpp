
1327 A - Sum of Odd Integers.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long
using ldb = long double;
using pa = pair < int, int >;
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const int LINF = LLONG_MAX;
 
void test(){
    int n,k;
    cin >> n >> k;
    int s = k*k;
    if(n<s){
    	cout << "NO\n";
    }
    else{
    	if(s%2 == n%2)
    		cout << "YES\n";
    	else
    		cout <<"NO\n";
    }


}  
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    f(i,0,tt) test();   
    return 0;
}
