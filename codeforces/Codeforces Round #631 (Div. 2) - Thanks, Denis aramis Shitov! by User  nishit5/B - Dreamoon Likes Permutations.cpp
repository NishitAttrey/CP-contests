
1330 B - Dreamoon Likes Permutations.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long
using ldb = long double;
using pa = pair < int, int >;
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 5e5 + 10;
const double PI = acos(-1);
const int LINF = LLONG_MAX;
 
void test(){
    int n;
    cin >> n;
    vector<int>q(n);
    int ma = -1;
    f(i,0,n){
        cin >> q[i];
        ma = max(ma,q[i]);
    }
    set<int,greater<int>>front,back,front1,back2;
    int pos = -1;
    f(i,0,n){
        front.insert(q[i]);
        if(front.size() == ma and *front.begin() == ma and front.size()==ma){
            pos = i;
            break;
        }
    }
    bool check1  = true;
    f(i,1,front.size()+1){
        if(front.find(i)==front.end()){
            check1 = false;
        }
    }
    f(i,pos+1,n){
        front1.insert(q[i]);
    }

    int remains = n-ma;
    bool check2 = true; 
    if(front1.size() == remains and remains > 0){
        f(i,1,front1.size()+1){
            if(front1.find(i)==front1.end()){
                check2 = false;
                break;
            }
        }
    }
    else{
        check2 = 0;
    }
    int pos2 = -1;
    for(int i = n-1;i >= 0;i--){
        back.insert(q[i]);
        if(back.size() == ma and *back.begin() == ma and back.size() == ma){
            pos2 = i;
            break;
        }
    }
    bool check3  = true;
    f(i,1,back.size()+1){
        if(back.find(i)==back.end()){
            check3 = false;
        }
    }
    for(int i = pos2-1;i >= 0;i--){
        back2.insert(q[i]);
    }
    int remains2 = n-ma;
    int check4 = 1;
    if(remains2 == back2.size() and remains2 > 0){
        f(i,1,remains2+1){
            if(back2.find(i)==back2.end()){
                check4 = 0;
                break;
            }
        }
    }
    else{
        check4 = 0;
    }
    if(check1 and check2 and check3 and check4 and front1.size()!=front.size()){
        cout << 2 << "\n";
        cout << front.size() << " " <<front1.size() << endl;
        cout << front1.size()<< " " << front.size() << endl;
        return;
    }
    if(check1 and check2){
        cout << 1 << endl;
        cout << front.size() << " " << front1.size() << endl;
        return;
    }
    if(check3 and check4){
        cout << 1 << endl;
        cout << back2.size() << " " << back.size() << endl; 
        return;
    }
    cout << 0 << endl;


}  
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    f(i,0,tt) test();   
    return 0;
}


1330 B - Dreamoon Likes Permutations.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long
using ldb = long double;
using pa = pair < int, int >;
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 2e5 + 10;
const double PI = acos(-1);
const int LINF = LLONG_MAX;
 
void test(){
    int n;
    cin >> n;
    vector<int>q(n);
    int left[n],right[n];
    f(i,0,n){
    	cin >> q[i];
    	left[i] = -1;
    	right[i] = -1;
    }
    int a[n+1000];
    int f = 0,ma=-1,mi = 1;
    memset(a,0,sizeof(a));
    f(i,0,n){
    	if(a[q[i]]==0){
    		a[q[i]]=1;
    	}
    	else{
    		f =1;
    	}
    	ma = max(ma,q[i]);
    	if(ma-mi == i and f == 0){
    		left[i] = i;
    	}
    }
    ma = -1;
    mi = 1;
    f = 0;
    memset(a,0,sizeof(a));
    for(int i = n-1;i >= 0;i--){
    	if(a[q[i]] == 0){
    		a[q[i]] = 1;
    	}
    	else{
    		f = 1;
    	}
    	ma = max(ma,q[i]);
    	if(ma - mi == n-i-1 and f == 0){
    		right[i] = n-i-1;
    	}
    }
    vector<int>ans_l,ans_r;
    int c = 0;
    f(i,1,n){
    	if(left[i-1]!=-1 and right[i]!=-1){
    		c++;
    		ans_l.push_back(left[i-1]+1);
    		ans_r.push_back(right[i]+1);
    	}
    }
    cout << c << endl;
    f(i,0,ans_l.size()){
    	cout << ans_l[i] << " " << ans_r[i] << endl;
    }


}  
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    f(i,0,tt) test();   
    return 0;
}
