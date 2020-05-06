
1285 D - Dr. Evil Underscores.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long 
using ldb = long double;
using pa = pair < int, int >;
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
const int MOD = 1e9 + 7, N = 5e5 + 10;
const int LINF = LLONG_MAX;

struct trie{
    trie* bit[2];
    int c;
};
trie* head;
int n;
int x;
void insert(int val){
    trie* tmp = head;
    for(int  i = 30;i >= 0; i--){
        int b = (val&(1ll<<i)?1:0);
        tmp ->c = i;
        if(tmp->bit[b] == NULL){
            tmp->bit[b] = new trie();
        } 
        tmp = tmp->bit[b];
    }
}
int compute(trie* head){
    if(head->bit[0] != NULL and head->bit[1] != NULL){
        return ((1ll<<head->c) + min(compute(head->bit[0]),compute(head->bit[1])));
    }
    if(head->bit[0] != NULL){
        return compute(head->bit[0]);
    }
    if(head->bit[1] != NULL){
        return compute(head->bit[1]);
    }
    return 0;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    head = new trie();
    cin >> n;
    f(i,0,n){
        cin >> x;
        insert(x);  
    }
    cout << compute(head);
    
    return 0;
}
 
1285 D - Dr. Evil Underscores.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
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
int n;
vec q(N);
int compute(int id,vector<int>q){
   if(id==-1){
      return 0;
   }
   if(q.size()==0)
      return -1;
   vec q1,q2;
   f(i,0,q.size()){
      if(q[i]>>id&1){
         q1.pb(q[i]^(1<<id));
      }
      else
         q2.pb(q[i]);
   }
      int r2=compute(id-1,q2);
      int r1=compute(id-1,q1);
      if(q1.size()==0){
         return r2;
      }
      if(q2.size()==0){
         return r1;
      }
      int ans=min(r1,r2)^(1<<id);
      return ans;
   }
   

int32_t main() {
   cin >> n;
   q.resize(n);
   f(i,0,n){
      cin >> q[i];
   }
   cout<<compute(31,q);
}