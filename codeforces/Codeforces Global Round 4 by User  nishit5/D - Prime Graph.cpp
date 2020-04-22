
1178 D - Prime Graph.cpp GNU C++17 Accepted
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
  
  ll n;
  cin>>n;

vector<bool> is_prime(1050, true);

is_prime[0] = is_prime[1] = false;

for (ll i = 2; i <= 1050; i++) 
{
    if (is_prime[i] && (long long)i * i <= 1050) 
    {
        for (ll j = i * i; j <= 1050; j += i)
            is_prime[j] = false;
    }
}
// f(i,0,1050)
// {
//   if(is_prime[i])
//     cout<<i<<edl;
// }

if(is_prime[n])
{
 
  cout<<n<<edl;
  cout<<1<<" "<<2<<edl;
  f(i,3,n+1)
  {
    cout<<i<<" "<<i-1<<edl;
   
  }
  cout<<1<<" "<<n<<edl;
  



}
else
{
  ll q1;
  f(i,n+1,5000)
  {

    if(is_prime[i])
    {
        q1=i;
        break;
    }
  }
  cout<<q1<<edl;
   cout<<1<<" "<<2<<edl;
  f(i,3,n+1)
  {
    cout<<i<<" "<<i-1<<edl;
   
  }
  cout<<1<<" "<<n<<edl;
  ll re=q1-n;
  ll pos[1000]={0};
  for(ll i=1;re!=0;i++)
  {
    if(pos[i]==0&&pos[i+2]==0)
    {
    cout<<i<<" "<<i+2<<edl;
      re--;
      pos[i]=1;
      pos[i+2]=1;
    }
    
  }


}








  


    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 