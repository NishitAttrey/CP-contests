
1282 D - Enchanted Artifact.cpp GNU C++17 Accepted
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
int query(str s){
	cout<<s<<endl;
	int ans; 
	cin >> ans;
	if(ans==-1){
		exit(1);
	} 
	else if(ans==0){
		exit(0);
	}
	return ans;
}
int32_t main() {
    fast();
    int n=query("a");
    if(n==300){
    	query(string(n,'b'));
    	return 0;
    }
    str s=string(n+1,'a');
    int n1=query(s);
    if(n1==n+1){
    	query(string(n,'b'));
    	return 0;
    }
    int c=0;
    f(i,0,n+1){
    	s[i]='b';
    	if(query(s)==n1-1-c){
    		++c;
    	}
    	else
    		s[i]='a';
    }


    return 0;
}
 