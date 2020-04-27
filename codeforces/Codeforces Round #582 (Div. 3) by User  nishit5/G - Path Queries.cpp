
1213 G - Path Queries.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define po pop_back
#define mp make_pair
#define mt make_tuple
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
ll parent[200009],sizes[200009];

void make_set(int v) {
    parent[v] = v;
    sizes[v] = 1;
}
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
ll re=0;
ll cnt(ll a)
{
    return 1ll*a*(a-1)/2;
}
void union_sets(int a, int b) {
    a = find_set(a);

    b = find_set(b);
    if (a != b) {
        if (sizes[a] < sizes[b])
            swap(a, b);

        re-=cnt(sizes[a]);
        re-=cnt(sizes[b]);
        parent[b] = a;
        sizes[a] += sizes[b];
        re+=cnt(sizes[a]);
    }
}
int main() 
{

 fast();
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif
  ll n,m;
  cin >> n >> m;
  vector<array<int,3>> inputs(n-1);
  f(i,0,n-1){
    cin>>inputs[i][1] >> inputs[i][2] >> inputs[i][0];
    inputs[i][1]--;
    inputs[i][2]--;
  }
  vector<pa>weights(m); 
  vec answer(m);
  f(i,0,m){
    cin >> weights[i].F;
    weights[i].S=i;
  }
  f(i,0,n+1){
    make_set(i);
  }
  sort(all(inputs));
  sort(all(weights));
  // f(i,0,n){
  //   cout<<inputs[i][0]<<"\n";
  // }

  ll pos=0;
  f(i,0,m){
    while(pos<n-1&&inputs[pos][0]<=weights[i].F){
        union_sets(inputs[pos][1],inputs[pos][2]);
        ++pos;
    }

    answer[weights[i].S]=re;
  }
  for (int i = 0; i < m; ++i) {
        cout << answer[i]<< " ";
    }
  




 
  cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 