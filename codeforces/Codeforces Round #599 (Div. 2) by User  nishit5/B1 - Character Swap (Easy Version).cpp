
1243 B1 - Character Swap (Easy Version).cpp GNU C++17 Accepted
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
 
template < typename T > using index_set = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
template < typename T > using MinPriorityQueue = priority_queue < T, vector < T >, greater < T > >;
 
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
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
 
int main() {
    fast();

    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    //cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){
	ll n;
	cin >> n;
	str s1,s2;
	cin >> s1 >> s2;
	if(n==1 and s1!=s2){
		cout<<"NO\n";
		return ;
	}

	ll c=0;
	ll pre1[26]={0};
	ll pre2[26]={0};
	map<char,ll>maps;
	f(i,0,n){
		pre1[s1[i]-'a']++;
		pre2[s2[i]-'a']++;
		maps[s1[i]-'a']++;
		maps[s2[i]-'a']++;
	}
	for(auto s:maps){
		if(s.S&1){
			cout<<"NO\n";
			return ;
		}
	}
	ll f=0;
	vec pos;
	f(i,0,n){
		if(s1[i]!=s2[i]){
			pos.pb(i);

		}
	}
	if(pos.size()>2 ||pos.size()==1){
		cout<<"NO\n";
	}
	// cout<<pos[0]<<" "<<pos[1]<<edl;
	else if(s1[pos[1]]==s1[pos[0]] and s2[pos[1]]==s2[pos[0]])
		cout<<"YES\n";
	else
		cout<<"NO\n";

}  
