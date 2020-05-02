
1234 D - Distinct Characters Queries.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long 
using ldb = long double;
using pa = pair < int, int >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, N = 5e5 + 10;
const int LINF = LLONG_MAX;
int bit[N][26];
int n;
void update(int id, int ch, int val){
    while(id <= n){
        bit[id][ch] += val;
        id += id&-id;
    }
}
int sum(int id, int ch){
    int ans = 0;
    while(id > 0){
        ans += bit[id][ch];
        id -= id&-id;
    }
    return ans;
}
int query(int l, int r){
    int ans  = 0;
    for(int i = 0; i < 26; i++){
        if(sum(r,i) - sum(l-1,i) > 0){
            ans++;
        }
    }
    return ans;
}
int32_t main() {
    fast();
    string s;
    cin >> s;
    n = s.size();
    f(i,0,n){
        update(i+1, s[i]-'a', 1);
    }
    int q;
    cin >> q;
    f(i,0,q){
        int type;
        cin >> type;
        if(type == 1){
            int pos;
            char ch;
            cin >> pos >> ch;
            update(pos,s[pos-1]-'a', -1);
            s[pos-1] = ch;
            update(pos,s[pos-1]-'a', 1);
        }
        else{
            int l ,r;
            cin >> l >> r;
            cout << query(l, r)  << endl;
        }
    }
    return 0;
}
 
1234 D - Distinct Characters Queries.cpp GNU C++17 Accepted
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
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
 
int main() {
    fast();
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
    ll tt=1;
    // cin>>tt;
    f(i,0,tt) test();   
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){

    str s;
    cin >> s;
    set<ll>sets[26];
    f(i,0,s.size())
    {
        sets[s[i]-'a'].add(i);
    }
    ll q;
    cin >> q;
    while(q--){
        ll type,l,r;
        char ch;
        cin >>type;
        if(type==1)
        {
            cin >> l >> ch;
            l--;
            sets[s[l]-'a'].erase(l);
            s[l]=ch;
            sets[s[l]-'a'].add(l);
        }
        else
        {
            cin >> l >> r;
            l--;
            r--;
            ll ans=0;
            f(i,0,26){
                auto s=sets[i].lower_bound(l);
                if(s!=sets[i].end() and *s<=r)
                {
                    ans++;
                }
            }
            cout<<ans<<edl;
        }

    }

}  