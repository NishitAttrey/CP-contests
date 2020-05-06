
1269 C - Long Beautiful Integer.cpp GNU C++17 Accepted
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
int32_t main() {
    fast();
    int n,k;
    cin >> n >> k;
    str s;
    cin >> s;
    bool check=1;
    f(i,0,n){
    	if(i-k>=0 and s[i]!=s[i-k])
    		check=0;
    }
    cout<<n<<edl;
    if(check){
    	cout<<s<<edl;
    	return 0;
    }
    str s1=s.substr(0,k);
    f(i,k,n){
    	s1+=s1[i-k];
    }
    if(s1>=s){
    	cout<<s1;
    	return 0;
    }
    for(int i=k-1;i>=0;i--){
    	if(s1[i]=='9'){
    		s1[i]='0';
    	}
    	else{
    		++s1[i];
    		break;
    	}	
    }
    f(i,k,n){
    	s1[i]=s1[i-k];
    }
    cout<<s1<<edl;
   

    return 0;
}
 