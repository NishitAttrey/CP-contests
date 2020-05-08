
1294 F - Three Paths on a Tree.cpp GNU C++17 Accepted
/*Nishit Attrey*/
 #include<bits/stdc++.h>
 using namespace std;
 #define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie()
 #define ll long long  
 #define pb push_back
 #define po pop_back
 #define mp make_pair
 #define mt make_tuple
 #define F  first
 #define S  second
 #define ldp long double
 #define f(i,x,n) for(ll i=x;i<n;i++) 
 #define all(c) c.begin(),c.end()
 #define sz(a) ll((a).size()
 #define str string
 #define edl "\n"
 #define add insert
 #define cot continue
 const int N=4e5;
 typedef vector < ll > vec;
 typedef pair<ll,ll> pa;
 const ll mod=1e9+7;
 const ldp pi=acos(-1);
 vector<ll>adj[500001];
int dist[500001];
int n;
int d;
int visit[N];
int parent[N];
void dfstree(ll s,ll pre){
 	parent[s]=pre;
 	for(auto u :adj[s]){
 		if(u==pre)
 			continue;
 		dist[u]=dist[s]+1;
 		dfstree(u,s);
 	}
}
int ans3,distance2=0;
int flag=0;
void depth_dfs(int u,int d=0){
		visit[u]=1;
		if(distance2<d){
			distance2=d;
			ans3=u;
			flag=1;
		}
		for(auto s:adj[u]){
			if(!visit[s]){
				depth_dfs(s,d+1);
			}
		}
}
int32_t main(){
 
    fast();
    cin>>n;
	ll i,x,y;
    f(i,0,n-1){
     cin>>x>>y;
     x--;
     y--;
     adj[x].pb(y);
     adj[y].pb(x);  

    }
    dfstree(0,-1);
    int node,dis=0;
    f(i,0,n){
    	if(dist[i]>dis){
    		dis=dist[i];
    		node=i;
    	}
    }
    f(i,0,n){
    	dist[i]=0;
    }
    int ans1=node;
    dfstree(node,-1);
    int ans2,distance1=0;
    f(i,0,n){
    	if(dist[i]>distance1){
    		distance1=dist[i];
    		ans2=i;
    	}
    }
    vector<int>path;
    for(int v=ans2;v!=-1;v=parent[v]){
    	path.pb(v);
    }
    for(auto s:path){
    	visit[s]=1;
    }
    for(auto i:path){
		depth_dfs(i);

    }
    if(flag){
    	cout<<distance2+distance1<<edl;
    	cout<<ans1+1<<" "<<ans2+1<<" "<<ans3+1<<edl;
    }
    else{
    	cout<<n-1<<edl;
    	f(i,0,n){
    		if(i!=ans1 and i!=ans2){
    			cout<<ans1+1<<" "<<i+1<<" "<<ans2+1<<edl;
    			return 0;
    		}
    	}
    }

}	  
	    


	  
	     
	    






// 
1294 F - Three Paths on a Tree.cpp GNU C++17 Accepted
/*Nishit Attrey*/
 #include<bits/stdc++.h>
 using namespace std;
 #define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie()
 #define ll long long  
 #define pb push_back
 #define po pop_back
 #define mp make_pair
 #define mt make_tuple
 #define F  first
 #define S  second
 #define ldp long double
 #define f(i,x,n) for(ll i=x;i<n;i++) 
 #define all(c) c.begin(),c.end()
 #define sz(a) ll((a).size()
 #define str string
 #define edl "\n"
 #define add insert
 #define cot continue
 const int N=4e5;
 typedef vector < ll > vec;
 typedef pair<ll,ll> pa;
 const ll mod=1e9+7;
 const ldp pi=acos(-1);
 vector<ll>adj[500001];
int dist[500001];
int n;
int d;
int visit[N];
int parent[N];
void dfstree(ll s,ll pre){
 	parent[s]=pre;
 	for(auto u :adj[s]){
 		if(u==pre)
 			continue;
 		dist[u]=dist[s]+1;
 		dfstree(u,s);
 	}
}
int ans3,distance2=0;
 int flag=0;
void depth_dfs(int u,int d=0){
		visit[u]=1;
		if(distance2<d){
			distance2=d;
			ans3=u;
			flag=1;
		}
		for(auto s:adj[u]){
			if(!visit[s]){
				depth_dfs(s,d+1);
			}
		}

}

 int32_t main(){
 
    fast();
    cin>>n;
	ll i,x,y;
    f(i,0,n-1){
     
     cin>>x>>y;
     x--;
     y--;
     adj[x].pb(y);
     adj[y].pb(x);  

    }
    dfstree(0,-1);
    int node,dis=0;
    f(i,0,n){
    	if(dist[i]>dis){
    		dis=dist[i];
    		node=i;
    	}
    }
    f(i,0,n){
    	dist[i]=0;
    }
    // cout<<dis<<" "<<node<<edl;
    int ans1=node;
    dfstree(node,-1);
    int ans2,distance1=0;
    f(i,0,n){
    	// cout<<dist[i]<<edl;
    	if(dist[i]>distance1){
    		distance1=dist[i];
    		ans2=i;
    	}
    }
    // cout<<ans2<<edl;
    vector<int>path;
    for(int v=ans2;v!=-1;v=parent[v]){
    	// cout<<v<<edl;
    	path.pb(v);
    }
    for(auto s:path){
    	visit[s]=1;
    }
    for(auto i:path){
		depth_dfs(i);

    }
    // cout<<distance1<<" "<<distance2<<edl;
    if(flag){
    	cout<<distance2+distance1<<edl;
    	cout<<ans1+1<<" "<<ans2+1<<" "<<ans3+1<<edl;
    }
    else{
    	cout<<n-1<<edl;
    	f(i,0,n){
    		if(i!=ans1 and i!=ans2){
    			cout<<ans1+1<<" "<<i+1<<" "<<ans2+1<<edl;
    			return 0;
    		}
    	}
    }

}	  
	    


	  
	     
	    






// 