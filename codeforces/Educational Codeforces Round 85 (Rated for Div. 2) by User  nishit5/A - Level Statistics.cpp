
1334 A - Level Statistics.cpp GNU C++17 Accepted
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
    int n;
    cin >> n;
    vector<array<int,2>>q(n);
    f(i,0,n){
    	cin >> q[i][0] >> q[i][1];
    }
    int p1 = 0,p2 = 0;
    f(i,0,n){
    	int p22 = q[i][1] -p2;
    	int p11 = q[i][0] - p1;
    	if(p11 >= p22 and p11 >= 0 and p22 >=0){
    		p1 = q[i][0];
    		p2 = q[i][1];
    	} 
    	else{
    		cout << "NO\n";
    		return;
    	}
    }
    cout << "YES\n";

}  
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    f(i,0,tt) test();   
    return 0;
}
