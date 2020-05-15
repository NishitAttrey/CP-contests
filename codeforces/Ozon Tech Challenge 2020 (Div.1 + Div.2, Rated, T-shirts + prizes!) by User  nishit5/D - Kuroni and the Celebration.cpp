
1305 D - Kuroni and the Celebration.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long 
using ldb = long double;
using pa = pair < int, int >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, N = 5e5 + 10;
const int LINF = LLONG_MAX;

int32_t main() {
    fast();
    int n;
    cin >> n;
    vector<vector<int>>adj(n);
    f(i,0,n-1) {
     	int x, y;
     	cin >> x >> y;      
     	--x;
     	--y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    vector<int>visit(n, 1);
    while(true) {
    	vector<int>deg(n);
    	vector<int>leaves;
    	f(i,0,n) {
    		if(!visit[i]){
    			continue;
    		}

			for(auto j : adj[i]) {
				if(visit[j]) {
					deg[i]++;
				}
			}
			if(deg[i]==1) {
				leaves.pb(i);
			}
    	}
    	if(leaves.size()<2){
    		vector<int>re;
    		f(i,0,n){
    		 	if(visit[i]){
    		 		re.pb(i);
    		 	}      
    		}
    		cout<<"! "<<re[0]+1<<endl;
    		return 0;
    	}
    	cout << "? " << leaves[0]+1 << " " << leaves[1]+1 << endl;
    	int v;
    	cin >> v;
    	if(v == leaves[0]+1 || v==leaves[1]+1){
    		cout << "! " << v << endl;
    		return 0;	
    	}
    	visit[leaves[0]]=visit[leaves[1]]=0;
    }

    return 0;
}
 