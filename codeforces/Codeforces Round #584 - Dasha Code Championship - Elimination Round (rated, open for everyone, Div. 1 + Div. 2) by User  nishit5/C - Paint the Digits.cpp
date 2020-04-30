
1209 C - Paint the Digits.cpp GNU C++17 Accepted
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
 
int main() 
{
 
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
void test() {

   
        ll n;
        cin >> n;
        str s;
        cin >> s;
        ll L = -1;
        bool Check = false;
        for (ll id = 9; id >= 0; id--) {
            ll KT[n];
            memset(KT, 0, sizeof(KT));
            vec A;
            int R = n - 1;
            while (R >= 0 && (s[R] - '0') != id) R--;
            if (R == -1) continue;
            for (ll i = R; i >= 0; i--) {
                if (s[i] <= s[R]) {
                    A.push_back(s[i] - '0');
                    R = i;
                    KT[i] = 1;
                }
            }
            reverse(all(A));
            for (ll i = 0; i < n; i++) {
                if (KT[i] == 0) {
                    A.push_back(s[i] - '0');
                    KT[i] = 2;
                }
            }
            vec B = A;
            sort(all(B));
            if (A == B) {
                for (int i = 0; i < n; i++) cout << KT[i];
                cout << edl;
                Check = true;
                break;
            }
        }
        if (!Check) 
            cout << '-' <<edl;
    }

