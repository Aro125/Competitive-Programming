#include<bits/stdc++.h>
using namespace std;

void debug(long long x) {cerr << x << " ";}
void debug(double x) {cerr << x << " ";}
void debug(int x) {cerr << x << " ";}
void debug(string &s) {cerr << s << " ";}
void debug(char c) {cerr << c << " ";}
 
template <class T> void debug(vector <T> v) {cerr << "[ "; for (T i : v) {debug(i); cerr << " ";} cerr << "]";}
template <class T> void debug(set <T> v) {cerr << "[ "; for (T i : v) {debug(i); cerr << " ";} cerr << "]";}
template <class T> void debug(T arr[] ,long long n) {cerr << "[ "; for (long long i = 0; i < n; i++) {debug(arr[i]); cerr << " ";} cerr << "]";}
void STDIO_SYSTEM(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("Aronno.txt", "w", stderr);
#endif
}
