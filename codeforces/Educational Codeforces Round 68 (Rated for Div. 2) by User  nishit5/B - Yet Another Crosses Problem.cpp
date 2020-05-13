
1194 B - Yet Another Crosses Problem.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
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




int main() 
{

 fast();
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif
  
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,m;
    cin>>n>>m;
    char q[n][m];
    f(i,0,n)
    {
      f(j,0,m)
      {
        cin>>q[i][j];
      }

    }
    ll q1[n]={0},q2[m]={0};
    f(i,0,n)
    {
      f(j,0,m)
      {
        if(q[i][j]=='*')
        {
          q1[i]++;
          q2[j]++;
        }
      }
    }
    ll re=1e10;
    f(i,0,n)
    {
      f(j,0,m)
      {
        ll tot=n+m-q1[i]-q2[j];
        if(q[i][j]=='.')
          re=min(re,tot-1);
        else
          re=min(re,tot);



        

      }
    } 
    cout<<re<<edl;


  }


  


    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 