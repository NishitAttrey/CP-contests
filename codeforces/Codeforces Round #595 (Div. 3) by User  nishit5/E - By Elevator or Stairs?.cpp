
1249 E - By Elevator or Stairs?.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define ceils(s,n) (s+n-1)/n
#define str string
#define add insert
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 2e5 + 10;
const ll LINF = LLONG_MAX;
ll dp[N][2],s[N],el[N],n,c;
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
    cin >> n >> c;
    f(i,0,n-1){
        cin >> s[i];
    }
    f(i,0,n-1){
        cin >> el[i];
    }
    f(i,0,n+1){
        dp[i][0]=LINF;
        dp[i][1]=LINF;
    }
    dp[0][0]=0;
    dp[0][1]=c;
    f(i,0,n-1){
        dp[i+1][0]=min(dp[i][0]+s[i],dp[i+1][0]);
        dp[i+1][0]=min(dp[i][1]+s[i],dp[i+1][0]);
        dp[i+1][1]=min(dp[i][0]+el[i]+c,dp[i+1][1]);
        dp[i+1][1]=min(dp[i][1]+el[i],dp[i+1][1]);

    }
    f(i,0,n){
        cout<<min(dp[i][0],dp[i][1])<<" ";
    }

     

    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
    
}
 