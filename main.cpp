#include <bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef long long ll;
typedef long double lld;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, 
tree_order_statistics_node_update > pbds; /*find_by_order, order_of_key*/

#ifndef ONLINE_JUDGE
  #include "debug.h"
#else
  #define debug(x)
#endif

#define pb push_back
#define f first
#define sc second
#define mp make_pair
#define yea cout << "Yes\n"
#define nope cout << "No\n"
#define set_bits(n) __builtin_popcountll(n)
#define zeroF_64(n) __builtin_clzll(n)
#define zeroL_64(n) __builtin_ctzll(n)
#define flag cout << "****\n"

ll dx[] = {-1, 1,  0, 0, -1, -1,  1, 1};
ll dy[] = {0,  0, -1, 1, -1,  1, -1, 1};

ll nCr(ll n, ll r)
{
   long long p = 1, k = 1;
   if (n - r < r)
        r = n - r;
   if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
    long long m = __gcd(p, k);
      p /= m , k /= m , n-- , r--;
    }
 }
 else p = 1;
    return p;
}

ll fact(ll n) {
  if(n > 1) return n * fact(n - 1);
  else 
    return 1;
}

ll nPr(ll n , ll r) {
  return fact(n) / fact(n - r);
}

const ll inf =   1e18;
const ll mod =   1e9 + 7;
const ll MOD =   998244353;
const ll N   =   1e5 + 5;
const ll PI  =   3.141592653589793238462;

ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}

mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);} 

void testCase() {
  
}

signed main()
{
  #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("Aronno.txt", "w", stderr);
  #else
        ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
  #endif
      ll T = 1; cin >> T;
      while(T--) {
        testCase();
      }
  return 0;
}
