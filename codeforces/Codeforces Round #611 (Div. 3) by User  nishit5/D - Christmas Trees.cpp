
1283 D - Christmas Trees.cpp GNU C++17 Accepted
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
    map<int,int>maps;
    set<pa>sets;
    set<int>ans;
    int tree,people,x;
    cin >> tree >> people;
    f(i,0,tree){
        cin >> x;
        maps[x]=1;
        sets.add({0,x});
    }
    int c=0;
    while(ans.size()<people){
        auto s=*sets.begin();
        sets.erase(s);
        if(!maps[s.S]){
            c+=s.F;
            ans.add(s.S);
        }
        if(!maps[s.S+1]){
            sets.add({s.F+1,s.S+1});
        }
        if(!maps[s.S-1]){
            sets.add({s.F+1,s.S-1});
        }
        maps[s.S]=1;
    }
    cout<<c<<edl;
    for(auto &s:ans){
        cout<<s<<' ';
    }
    return 0;
}
 