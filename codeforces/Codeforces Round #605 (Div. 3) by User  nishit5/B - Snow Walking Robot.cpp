
1272 B - Snow Walking Robot.cpp GNU C++17 Accepted
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
#define int ll
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
 
int32_t main() {
    fast();
    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "\nTime taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){
    str s;
    cin >> s;
    int cl=0,cr=0,cu=0,cd=0;
    f(i,0,s.size()) {
        if (s[i]=='L')
            cl++;
        else if (s[i]=='R')
            cr++;
        else if (s[i]=='U')
            cu++;
        else
            cd++;
    }
    int mn=min(cl,cr);
    cl=mn;
    cr=mn;
    mn=min(cu,cd);
    cu=mn;
    cd=mn;
    if(cl==0) {
        if (cu>0 and cd>0) {
            cout<<2<<edl;
            cout<<"UD\n";
        }
        else {
            cout<<0<<edl;
        }
        return;
    }
    if (cu==0) {
        if (cl and cr) {
            cout<<2<<edl;
            cout<<"LR\n";
        }
        else {
            cout<<0<<edl;
        }
        return;
    }
    cout<<cu+cd+cl+cr<<edl;
    f(i,1,cl+1)
        cout<<'L';
    f(i,1,cu+1)
        cout<<'U';
    f(i,1,cr+1)
        cout <<'R';
    f(i,1,cd+1)
        cout<<'D';
    cout<<edl;
}

