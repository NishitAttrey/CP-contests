
1281 B - Azamon Web Services.cpp GNU C++17 Accepted
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
    str s1,s2;
    cin >> s1 >> s2;
    map<char,ll>maps;
    int c=0;
    for(char ch='A';ch<='Z';ch++){
        maps[ch]=c;
        c++;
    }
    vec a(s1.size()),b(s2.size());
    f(i,0,s1.size()){
        a[i]=maps[s1[i]];
    }
    f(i,0,s2.size()){
        b[i]=maps[s2[i]];
    }
    int check[min(s1.size(),s2.size())];
    str s3=s1;
    sort(all(s3));
    int pos1,pos2;

    f(i,0,s1.size()){
        if(s1[i]!=s3[i]){
            pos1=i;
            break;
        }
    }
    if(pos1<s1.size()){
        int n=pos1+1;
        f(i,n,s1.size()){
            if(s1[i]<=s1[pos1]){
                pos1=i;
            }
        }
    
        f(i,0,s1.size()){
            if(s1[pos1]<s1[i]){
                swap(s1[i],s1[pos1]);
                break;
            }
        }
        if(s1<s2){
            cout<<s1<<edl;
        }
        else
            cout<<"---\n";
    }
    else{
            if(s1<s2){
                cout<<s1<<edl;
            }
            else
                cout<<"---\n";   
    }

    return ;
}  