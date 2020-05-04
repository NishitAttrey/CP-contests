
1277 D - Let's Play the Words?.cpp GNU C++17 Accepted
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
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
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
    int n;
    cin >> n;
    vec o1,lo;
    vector<string>s(n);
    int a1=0,b1=0;
    vec ans;
    f(i,0,n){
        cin >> s[i];
        if(s[i][0]=='0' and s[i][s[i].size()-1]=='0'){
            a1++;
        }
        if(s[i][0]=='0' and s[i][s[i].size()-1]=='1'){
            o1.pb(i);
        }
        if(s[i][0]=='1' and s[i][s[i].size()-1]=='1'){
            b1++;
        }
        if(s[i][0]=='1' and s[i][s[i].size()-1]=='0'){
            lo.pb(i);
        }
    }
    int a=o1.size();
    int b=lo.size();
    if(a==0 and b==0 and a1 and b1){
        cout<<-1<<edl;
        return;
    }
    if(abs(a-b)<2){
        cout<<0<<edl;
        cout<<edl;
        return;
    }
    map<str,int>maps;
    int re=abs(a-b)/2;
    f(i,0,a){
        maps[s[o1[i]]]=1;
    }
    f(i,0,b){
        maps[s[lo[i]]]=1;
    }
    if(a>b){
        f(i,0,a){
            str s1=s[o1[i]];
            reverse(all(s1));
            if(maps[s1]==0 and re>0){
                ans.pb(o1[i]);
                re--;
            }
        }
    }  
    else{
        f(i,0,b){
            str s1=s[lo[i]];
            reverse(all(s1));
            if(maps[s1]==0 and re>0){
                ans.pb(lo[i]);
                re--;
            }
        }

    }
    if(re!=0){
        cout<<-1<<edl;
        return;
    }      
    cout<<ans.size()<<edl;
    for(auto s:ans){
        cout<<s+1<<" ";
    }
    cout<<edl;
    


}  
