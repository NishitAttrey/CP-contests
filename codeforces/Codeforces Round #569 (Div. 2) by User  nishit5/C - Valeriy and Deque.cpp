
1180 C - Valeriy and Deque.cpp GNU C++17 Accepted
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
  ll a,qu;
  cin>>a>>qu;
  vec q(a);
  deque<ll>q3;
  ll ma=-1e1;
  f(i,0,a)
  {
  	cin>>q[i];
  	q3.push_back(q[i]);
  	if(q[i]>=ma)
  	{
  		ma=q[i];
  		
  	}
  }
  vector<pa>q2;

  ll c=0;
  while(q3.front()!=ma)
  {

  	ll x1=q3.front();
  	q3.pop_front();
  	ll x2=q3.front();
  	q3.pop_front();
  	if(x1>x2)
  	{
  		q3.push_front(x1);
  		q3.push_back(x2);

  	}
  	else
  	{
  		q3.push_front(x2);
  		q3.push_back(x1);
  		
  	}
  	q2.pb({x1,x2});
  	c++;
  	

  }

  ll c2=c;
  ll x1=q3.front();
  q3.pop_front();
  vector<pa>q5;
  
  while(!q3.empty())
  {
  
  	ll x2=q3.front();
  	q5.pb({x1,x2});
	q3.pop_front();
  	c++;
  }

  ll c3=c-c2;

  f(i,0,qu){
  		
  		ll a1;
  		cin>>a1;
  
 	 	if(a1<=c2)
  			cout<<q2[a1-1].F<<" "<<q2[a1-1].S<<edl;
  		else
  			cout<<q5[(a1-1-c2)%c3].F<<" "<<q5[(a1-1-c2)%c3].S<<edl;	
  }
  


  


    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 
