
1272 E - Nearest Opposite Parity.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define int ll
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define ceils(s,n) (s+n-1)/n
#define str string
#define add insert
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 2e5 + 10;
const ll LINF = LLONG_MAX;
int n,q[N],ans[N];
vector<ll>adj[N];
int32_t main() {
    fast();
    queue<int>qq;
    f(i,0,N+1){
        ans[i]=-1;
    }
    cin >> n;
    f(i,0,n){
        cin >> q[i];
    }
    f(i,0,n){
        if(i-q[i]>=0){
            if(q[i-q[i]]%2==q[i]%2){
                adj[i-q[i]].pb(i);
            }
            else{
                ans[i]=1;
                qq.push(i);
            }
        }
        if(i+q[i]<n){
            if(q[i+q[i]]%2==q[i]%2){
                adj[i+q[i]].pb(i);
            }
            else{
                ans[i]=1;
                qq.push(i);
            }
        }
    }
    while(!qq.empty()){
        int cur=qq.front();
        qq.pop();
        for(auto v:adj[cur]){
            if(ans[v]==-1){
                ans[v]=ans[cur]+1;
                qq.push(v);
            }
        }
    }
    f(i,0,n){
        cout<<ans[i]<<" ";
    }
    return 0;
}
 