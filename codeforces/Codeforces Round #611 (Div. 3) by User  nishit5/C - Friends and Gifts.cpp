
1283 C - Friends and Gifts.cpp GNU C++17 Accepted
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
bool visit[500001];
vector<ll>adj[500001];
int parents[N],parent[N];
 
int indeg[N],outdeg[N];
int32_t main() {
    fast();
    int n;
    cin >> n;
   int x[n+1];
   int last=-1,c=0;
   f(i,1,n+1){
      cin>>x[i];
      if(x[i]!=0){
         parents[i]=x[i];
         parent[x[i]]=1;
         indeg[x[i]]++;
      }
      else
        c++;
   }
    vector<int> out;
   f(i,1,n+1){
      if(parent[i]==0){
         out.pb(i);
      }
   }
   int k=out.size()-1,pre1,pre2;
   sort(all(out));
   reverse(all(out));
   if(out.size()&1){
        swap(out[out.size()/2],out[0]);
   }
   int p=0;
   f(i,1,n+1){
 
      if(x[i]==0 and parent[i]==0){
         if(out[p]==i and p+1<out.size()){
            swap(out[p],out[p+1]);
         }
         x[i]=out[p];
         p++;
      }
      // else{
      //    if(x[i]==0){
      //       x[i]=pre2;
      //       x[pre1]=out[k];
      //       pre1=i;
      //       k--;
 
      //    }
      // }
   }
   f(i,1,n+1){
      if(!x[i]){
            x[i]=out[p];
            p++;
      }
      cout<<x[i]<<" ";
   }
 
 
    return 0;
}