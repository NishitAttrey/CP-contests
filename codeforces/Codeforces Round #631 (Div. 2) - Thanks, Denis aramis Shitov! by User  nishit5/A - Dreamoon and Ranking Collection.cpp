
1330 A - Dreamoon and Ranking Collection.cpp GNU C++17 Accepted
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
    int n,x;
    cin >> n >> x;
    vector<int>q(n);
    map<int,int>maps;
    f(i,0,n){
    	cin >> q[i];
    	maps[q[i]] = 1;
    }
    f(i,1,500){
    	if(maps[i] == 0 and x > 0){
    		maps[i] = 1;
    		x--;
    	}
    }
    f(i,1,500){
    	if(maps[i] == 0){
    		cout << i-1 << endl;
    		return ;
    	}
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
