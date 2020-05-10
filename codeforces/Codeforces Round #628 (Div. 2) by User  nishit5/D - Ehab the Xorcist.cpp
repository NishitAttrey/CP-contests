
1325 D - Ehab the Xorcist.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long 
using ldb = long double;
using pa = pair < int, int >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, N = 5e5 + 10;
const int LINF = LLONG_MAX;

int32_t main() {
    fast();
    int xo,sum;
    cin >> xo >> sum;
    if(xo>sum or (sum-xo)&1){
        cout << -1 << endl;
        return 0;
    }
    if(sum == 0 and xo == 0){
        cout << 0 << endl;
        return 0;
    }
    if(sum == xo){
        cout << "1\n" << sum << endl;
        return 0;
    }
    int a = sum-xo;
    int element = 0 ;
    for(int i=60;i>=0;i--){
        int r1=1ll<<i;
        r1=r1*2;
        if(!(xo&(1ll<<i)) and r1<=a){
            a-=r1;
            element+=(1ll<<i);
        }
        // cout << i << " " << r1 << " "<< a << endl;
        // if(a==0){
        //  cout << 2 << endl;
        //  cout << xo + element <<" " << element << endl;
        //  return 0;
        // }
    }
    if(a==0){
        cout << 2 << endl;
        cout << xo + element <<" " << element << endl;
        return 0;
    }
    cout << 3 << endl;
    a=(sum-xo)/2;
    cout << xo << " " << a << " " << a << endl; 



    return 0;
}
 
1325 D - Ehab the Xorcist.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long 
using ldb = long double;
using pa = pair < int, int >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(int i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, N = 5e5 + 10;
const int LINF = LLONG_MAX;

int32_t main() {
    fast();
    int xo,sum;
    cin >> xo >> sum;
    if(xo>sum or (sum-xo)&1){
    	cout << -1 << endl;
    	return 0;
    }
   	if(sum == 0 and xo == 0){
   		cout << 0 << endl;
   		return 0;
   	}
   	if(sum == xo){
   		cout << "1\n" << sum << endl;
   		return 0;
   	}
   	int a = sum-xo;
   	int element = 0 ;
   	for(int i=60;i>=0;i--){
   		int r1=1ll<<i;
   		r1=r1*2;
   		if(!(xo&(1ll<<i)) and r1<=a){
   			a-=r1;
   			element+=(1ll<<i);
   		}
   		// cout << i << " " << r1 << " "<< a << endl;
   		// if(a==0){
   		// 	cout << 2 << endl;
   		// 	cout << xo + element <<" " << element << endl;
   		// 	return 0;
   		// }
   	}
   	if(a==0){
   			cout << 2 << endl;
   			cout << xo + element <<" " << element << endl;
   			return 0;
   		}
   	cout << 3 << endl;
   	a=(sum-xo)/2;
   	cout << xo << " " << a << " " << a << endl; 



    return 0;
}
 