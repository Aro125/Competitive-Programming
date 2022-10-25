#include<bits/stdc++.h>

 
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define f first
#define s second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, 
tree_order_statistics_node_update > pbds; 
 
void debug(ll t) {cerr << t << " ";}
void debug(int t) {cerr << t << " ";}
void debug(string t) {cerr << t << " ";}
void debug(char t) {cerr << t << " ";}
void debug(lld t) {cerr << t << " ";}
void debug(double t) {cerr << t << " ";}
void debug(ull t) {cerr << t << " ";}

template <class T> void debug(T arr[] ,long long n) {cerr << "[ "; for (long long i = 1; i <= n; i++) {debug(arr[i]); cerr << " ";} cerr << "]"; cerr << endl;}
template <class T, class V> void debug(pair <T, V> p);
template <class T> void debug(vector <T> v);
template <class T> void debug(set <T> v);
template <class T, class V> void debug(map <T, V> v);
template <class T> void debug(multiset <T> v);
template <class T, class V> void debug(pair <T, V> p) {cerr << "{"; debug(p.f); cerr << ","; debug(p.s); cerr << "}"; cerr << endl;}
template <class T> void debug(vector <T> v) {cerr << "[ "; for (T i : v) {debug(i); cerr << " ";} cerr << "]"; cerr << endl;}
template <class T> void debug(set <T> v) {cerr << "[ "; for (T i : v) {debug(i); cerr << " ";} cerr << "]"; cerr << endl;}
template <class T> void debug(multiset <T> v) {cerr << "[ "; for (T i : v) {debug(i); cerr << " ";} cerr << "]"; cerr << endl;}
template <class T, class V> void debug(map <T, V> v) {cerr << "[ "; for (auto i : v) {debug(i); cerr << " ";} cerr << "]"; cerr << endl;}
void debug(pbds v) {cerr << "[ "; for (auto i : v) {debug(i); cerr << " ";} cerr << "]"; cerr << endl;}
