
1334 B - Middle Class.cpp GNU C++17 Accepted
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
    vector<int>q(n);
    f(i,0,n){
        cin >> q[i];  
    }
    sort(all(q));
    reverse(all(q));
    ldb ans = 0;
    int c = 0;
    f(i,0,n){
    	ans += q[i];
    	ldb r = ans/(i+1);
    	if(r >= k){
    		c++;
    		continue;
    	}
    	else{
    		break;
    	}

    }
    cout << c << endl;
}  
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    f(i,0,tt) test();   
    return 0;
}
