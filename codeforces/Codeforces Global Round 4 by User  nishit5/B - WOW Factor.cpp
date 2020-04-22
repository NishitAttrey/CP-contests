
1178 B - WOW Factor.cpp GNU C++17 Accepted
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
  
  str s;
  cin>>s;


  ll q[s.size()]={0},q1[s.size()]={0};
  if(s[0]=='v'&&s[1]=='v')
    q[0]=1;
  if(s[0]=='o')
    q1[0]=1;
  for(ll i=1;i<s.size();i++)
  {
    if(s[i]=='v'&&s[i+1]=='v'&&i!=s.size()-1)
    { 
  
        q[i]+=q[i-1]+1;
       
      


    }
    if(s[i]=='v'&&s[i+1]!='v')
    {
      
      q[i]+=q[i-1];
      
  
    }
    if(s[i]=='o')
    {
      q1[i]+=q1[i-1]+1;
      q[i]+=q[i-1];
    }
    else if(s[i]!='o')
      q1[i]+=q1[i-1];

  }  
  ll s1=0;
  f(i,0,s.size())
  {
    // cout<<q[i]<<" "<<q1[i]<<edl;
    if(s[i]=='o')
    {
      s1+=q[i]*(q[s.size()-1]-q[i]);
    }

  }
  cout<<s1;

  


    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 