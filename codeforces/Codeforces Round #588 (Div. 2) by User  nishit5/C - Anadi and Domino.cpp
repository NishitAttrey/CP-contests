
1230 C - Anadi and Domino.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define str string
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 10;
const ll LINF = LLONG_MAX;

int n, col[N], ans;
bool edge[N][N], vis[6][6];
 
void solve() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (edge[i][j]) {
                vis[col[i]][col[j]] = true;
            }
        }
    }
    int cur = 0;
    for (int i = 0; i < 6; ++i) {
        for (int j = i; j < 6; ++j) {
            cur += vis[i][j];
            vis[i][j] = false;
        }
    }
    ans = max(ans, cur);
}
 
void dfs(int i) {
    if (i == n) {
        return solve();
    }
    for (int &j = col[i] = 0; j < 6; ++j) {
        dfs(i + 1);
    }
}
 

int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
      int m;
      cin>>n>>m;
      int i,x,y;
      f(i,0,m){
          cin>>x>>y;
          x--;
          y--;
         
          edge[x][y]=true;
          edge[y][x]=true;
      }   
      dfs(0); 
      cout<<ans;

    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 