
1243 B2 - Character Swap (Hard Version).cpp GNU C++17 Accepted
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
// bool is_prime(uint64_t n) {
//   if (n < 2) {
//     return false;
//   }
//   vector<uint32_t> small_primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
//   for (uint32_t x : small_primes) {
//     if (n == x) {
//       return true;
//     }
//     if (n % x == 0) {
//       return false;
//     }
//   }
//   if (n < 31 * 31) {
//     return true;
//   }
//   uint32_t s = __builtin_ctzll(n - 1);
//   uint64_t d = (n - 1) >> s;
//   function<bool(uint64_t)> witness = [&n, &s, &d](uint64_t a) {
//     uint64_t cur = 1, p = d;
//     while (p > 0) {
//       if (p & 1) {
//         cur = (__uint128_t) cur * a % n;
//       }
//       a = (__uint128_t) a * a % n;
//       p >>= 1;
//     }
//     if (cur == 1) {
//       return false;
//     }
//     for (uint32_t r = 0; r < s; r++) {
//       if (cur == n - 1) {
//         return false;
//       }
//       cur = (__uint128_t) cur * cur % n;
//     }
//     return true;
//   };
//   vector<uint64_t> bases_64bit = {2, 325, 9375, 28178, 450775, 9780504, 1795265022};
//   for (uint64_t a : bases_64bit) {
//     if (a % n == 0) {
//       return true;
//     }
//     if (witness(a)) {
//       return false;
//     }
//   }
//   return true;
// }
int main() {
    fast();
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){
	ll n;
	cin >> n;
	str s1,s2;
	cin >> s1 >> s2;
	vector<ll>q;
	ll q1[100]={0};
	f(i,0,n){
		if(s1[i]!=s2[i]){
			q1[s1[i]-'0']++;
			q1[s2[i]-'0']++;
			q.pb(i);	
		}
	}
	bool check=0;
	f(i,0,30){
		// cout<<q1[i]<<edl;
		if(q1[i]&1){
			cout<<"NO\n";
			return ;
		}
	}
	
	vector<pa>re;
	ll f=0;
	f(i,0,q.size()){
		if(s1[q[i]]==s2[q[i]]){
			continue;
		}
		f=0;
		f(j,i+1,q.size()){
			if(s2[q[i]]==s2[q[j]]){
				re.pb({q[i],q[j]});
				swap(s1[q[i]],s2[q[j]]);
				f=1;
				break;

			}
		}
		if(f){
			continue;
		}
		f(j,i+1,q.size()){
			if(s2[q[i]]==s1[q[j]]){
				re.pb({q[j],q[j]});
				swap(s1[q[j]],s2[q[j]]);
				re.pb({q[i],q[j]});
				swap(s1[q[i]],s2[q[j]]);
				f=1;
				break;
			}
		}
		if(f==0){
			cout<<"NO\n";
			return ;
		}
	}
	cout<<"YES\n";
	cout<<re.size()<<edl;
	for(auto s:re){
		cout<<s.F+1<<" "<<s.S+1<<edl;
	}

}  