
1294 D - MEX maximizing.cpp GNU C++17 Accepted
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

const int MOD = 1e9 + 7, N = 5e5 + 10;
const ll LINF = LLONG_MAX;
int ans[N];
int mark[N];
int32_t main() {
    fast();
    int n,x;
    cin >> n >> x;
    f(i,0,N){
    	ans[i]=i;
    }
    int curr=0;
    f(i,0,n){
    	int val;
    	cin >> val;
    	int rem=val%x;
    	if(ans[rem]<N){
    		mark[ans[rem]]=1;
    	}
    	ans[rem]+=x;
    	while(mark[curr]){
    		curr++;
    	}
    	cout<<curr<<edl;
    }


    return 0;
}
 