
1325 C - Ehab and Path-etic MEXs.cpp GNU C++17 Accepted
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

vector<int>adj[500001];
bool visit[500001];
vector<int>parent,dist;
queue<int>q;
int n;
map<int,pa>edges3;
map<pair<int,pa>,int>edges1;
map<pa,int>edges,edges2;
deque<int>val;
int deg[N];
vector<pa>q1;
vector<int>ans(N,-1);
void bfs(int x){
  	visit[x]=true;
  	dist[x]=0;
  	parent[x] = -1;
  	q.push(x);
  	while(!q.empty()){
	    int s=q.front();
	    q.pop(); 
	    for(auto u : adj[s]){
	      if(visit[u])
	        continue;
	      visit[u]=true;
	      dist[u]=dist[s]+1;
	      parent[u] = s;
	      q.push(u);
	    }

	}
}
void dfs(int v){
	int c=0;
	while(parent[v]!=-1 and !visit[v]){
		if(c%2==0){
			if(edges.find({v,parent[v]})!=edges.end()){
				int a=val.front();
				val.pop_front();
				edges[{v,parent[v]}]=a;
				c++;
			}
			else if(edges.find({parent[v],v})!=edges.end()){
				int a=val.front();
				val.pop_front();
				edges[{parent[v],v}]=a;
				c++;
			}
			
		}
		else{
			if(edges.find({v,parent[v]})!=edges.end()){
				int a=val.back();
				val.pop_back();
				edges[{v,parent[v]}]=a;
				c++;
			}
			else if(edges.find({parent[v],v})!=edges.end()){
				int a=val.back();
				val.pop_back();
				edges[{parent[v],v}]=a;
				c++;
			}
		}
		visit[v]=1;
		v=parent[v];
	}
}
int32_t main() {
    fast();
    cin >> n;
    int x,y;
    f(i,0,n-1){
    	val.push_back(i);
    }
    f(i,0,n-1){
    	cin>>x>>y;
    	x--;
    	y--;
    	deg[x]++;
    	deg[y]++;
    	adj[x].pb(y);
    	adj[y].pb(x);
    	edges2[{x,y}]=i;
    	edges3[i]={x,y};
    	edges[{x,y}]=-1;
    	q1.pb({x,y});
    }
    parent.resize(n);
    dist.resize(n);
    // f(i,0,n){
    // 	dist[i] = 0;
    // }
    // bfs(0);
    // f(i,0,n+1){
    // 	visit[i]=false;
    // }
    // vector<pa>dist1(n);
    // f(i,0,n){
    // 	dist1[i] = make_pair(dist[i],i);
    // }
    // sort(all(dist1));
    // reverse(all(dist1));
    // f(i,0,n){
    // 	if(!visit[dist1[i].S]){
    // 		dfs(dist1[i].S);
    // 	}
    // }
    // f(i,0,n-1){
    // 	cout << edges[edges3[i]] << endl;
    // }
    int c1=0;
    f(i,0,n){
    	if(deg[i]==1){
    		c1++;
    	}
    }
    int c=0;
    // int i=0;
    for(int i=0;i<n-1;i++){
    	if(deg[q1[i].F] == 1 or deg[q1[i].S] == 1){
    		ans[i]=c;
    		c++;
    		// i++;	
    	}
    	else{
    		ans[i]=c1;
    		c1++;
    		// i++;
    	}
    }
    f(i,0,n-1){
    	cout << ans[i] << endl;
    }
    return 0;
}
 