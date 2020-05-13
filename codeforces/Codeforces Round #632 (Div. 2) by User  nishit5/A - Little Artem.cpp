
1333 A - Little Artem.cpp GNU C++17 Accepted
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
    int n,m;
    cin >> n >> m;
    char ch[n][m];
    memset(ch,'B',sizeof(ch));
    ch[n-1][m-1] = 'W';
    f(i,0,n){
        f(j,0,m){
            cout << ch[i][j];
        }
        cout << endl;
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
