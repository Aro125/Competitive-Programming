#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#ifndef LOCAL
    #include "debug.h"
#else
    #define debug(x)
#endif
using namespace std;
using namespace __gnu_pbds;
using ll     =   long long; 
const ll inf =   1e18;
const ll mod =   1e9 + 7;
const ll N   =   1e5 + 5;
#define pb push_back
#define f first
#define sc second
#define yea cout << "Yes\n"
#define nope cout << "No\n"
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, 
tree_order_statistics_node_update > pbds; /*find_by_order, order_of_key*/

ll dx[] = {-1, 1,  0, 0, -1, -1,  1, 1};
ll dy[] = {0,  0, -1, 1, -1,  1, -1, 1};

ll fact(ll n) {
  if(n <= 1) return 1;
  return (n * fact(n - 1)) % mod;
}

void bruteForce(ll n) {
   for(ll i = 1; i <= n; i++) {
    for(ll j = 1; j <= n; j++) {
       
    }
   }
}

void testCase() {
  
}
 
signed main() {
  ios::sync_with_stdio(0); cin.tie(0); 
#ifndef ONLINE_JUDGE
 STDIO_SYSTEM();
#endif
  ll T = 1; cin >> T;
  while(T--) testCase();
  return 0;
}
