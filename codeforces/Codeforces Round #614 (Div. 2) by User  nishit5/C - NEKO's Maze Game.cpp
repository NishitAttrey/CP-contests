
1293 C - NEKO's Maze Game.cpp GNU C++17 Accepted
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
const int MOD = 1e9 + 7, N = 1e5 + 10;

int32_t main() {
    fast();
    int n,q;
    cin >> n >> q;
    int arr[2][n];
    f(i,0,n){
      arr[0][i]=arr[1][i]=0;
    }
   	int c=0;
   	vec x(q),y(q);
   	f(i,1,q+1){
   		cin >> x[i] >> y[i];
   		x[i]--;
   		y[i]--;
   		if(arr[x[i]][y[i]]==0){
   			arr[x[i]][y[i]]=1;
   			if(x[i]==0){
   				if(y[i]+1<n and arr[1][y[i]+1]==1){
   					c++;
   				}
   				if(y[i]-1>=0 and arr[1][y[i]-1]==1){
   					c++;
   				}
   				if(arr[1][y[i]]==1)
   					c++;
   			}
   		
   			else{
   				if(y[i]+1<n and arr[0][y[i]+1]==1){
   						c++;
   				}
   				if(y[i]-1>=0 and arr[0][y[i]-1]==1){
   						c++;
   				}
   				if(arr[0][y[i]]==1)
   					c++;


	   		}
	   	}
	   	else{
	   		arr[x[i]][y[i]]=0;
	   			if(x[i]==0){
   				if(y[i]+1<n and arr[1][y[i]+1]==1){
   					c--;
   				}
   				if(y[i]-1>=0 and arr[1][y[i]-1]==1){
   					c--;
   				}
   				if(arr[1][y[i]]==1)
   					c--;
   			}
   		
   			else{
   				if(y[i]+1<n and arr[0][y[i]+1]==1){
   						c--;
   				}
   				if(y[i]-1>=0 and arr[0][y[i]-1]==1){
   						c--;
   				}
   				if(arr[0][y[i]]==1)
   					c--;


	   		}
   	
	   		}


	   	
	   	if(c==0){
	   		cout<<"YES\n";
	   	}
	   	else
	   		cout<<"NO\n";

      }




   	

    return 0;
}
 