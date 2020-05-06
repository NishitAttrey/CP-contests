
1283 E - New Year Parties.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
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
    int n;
    cin >> n;
    vector<int>q(n);
    map<int,int>maps,map1;
    f(i,0,n){
        cin >> q[i];
        map1[q[i]]++;
    }
    int maxx=0,minn=0;
    sort(all(q));
    f(i,0,n){
        if(maps[q[i]-1]==0){
            maps[q[i]-1]=1;
            maxx++;
        }
        else if(maps[q[i]]==0){
            maps[q[i]]=1;
            maxx++;
        }
        else if(maps[q[i]+1]==0){
            maps[q[i]+1]=1;
            maxx++;
        }
    }
    int i=0;
    int j=0;
    while(i<n){
        while(q[j]-q[i]<=2 and j<n){
            j++;
        }
        i=j;
        minn++;
    }

    cout<<minn<<' '<<maps.size();


    return 0;
}
 
1283 E - New Year Parties.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
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
    int n;
    cin >> n;
    vector<int>q(n);
    map<int,int>maps,map1;
    f(i,0,n){
        cin >> q[i];
        map1[q[i]]++;
    }
    int maxx=0,minn=0;
    sort(all(q));
    f(i,0,n){
        if(maps[q[i]-1]==0){
            maps[q[i]-1]=1;
            maxx++;
        }
        else if(maps[q[i]]==0){
            maps[q[i]]=1;
            maxx++;
        }
        else if(maps[q[i]+1]==0){
            maps[q[i]+1]=1;
            maxx++;
        }
    }
    int c=1;
    while(c<=n){
        if(map1[c]){
            c+=3;
            minn++;
            // cout<<c-3<<" "<<c<<edl;
        }
        else
            c++;
    }

    cout<<minn<<' '<<maps.size();


    return 0;
}
 