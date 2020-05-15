
1305 B - Kuroni and Simple Strings.cpp GNU C++17 Accepted
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
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define int ll
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
 
int32_t main() {
    fast();
    ll tt=1;
    // cin>>tt;
    f(i,0,tt) test();   
    cerr << "\nTime taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){
	string s;
	cin >> s;
	vector<int>ans;
	int n=s.size();
	int ind=-1;
	f(i,0,n){
		if(s[i]=='('){
			ind=i;
			break;
		}
	}
	if(ind==-1){
		cout<<0<<endl;
		return ;
	}
	ind=-1;
	f(i,0,n){
		if(s[i]==')'){
			ind=i;
			break;
		}
	}
	if(ind==-1){
		cout<<0<<endl;
		return ;
	}
	int pre[n]={0};
	int post[n]={0};
	f(i,0,n){
		if(i==0){
			pre[i]=(s[i]=='(');
		}
		else{
			pre[i]=pre[i-1]+(s[i]=='(');
		}
	}
	for(int i=n-1;i>=0;i--){
		if(i==n-1){
			post[i]=(s[i]==')');
		}
		else{
			post[i]=post[i+1]+(s[i]==')');
		}
	}
	ind=-1;
	int ma=0;
	f(i,0,n){
		int t=min(pre[i],post[i]);
		if(t>ma){
			ma=t;
			ind=i;
		}
	}
	if(ind==-1){
		cout<<0<<endl;
		return ;
	}
	cout<<1<<endl<<2*ma<<endl;
	int c=0;
	vector<int>a;
	for(int i=0;i<=ind;i++){
		if(s[i]=='('){
			a.pb(i+1);
			c++;
		}
		if(c==ma){
			break;
		}
	}
	vector<int>b;
	c=0;
	for(int i=n-1;i>=ind;i--){
		if(s[i]==')'){
			b.pb(i+1);
			c++;
		}
		if(c==ma){
			break;
		}
	}
	reverse(all(b));
	for(auto s:a){
		cout<<s<<" ";
	}
	for(auto s:b){
		cout<<s<<" ";
	}
	cout<<endl;

}