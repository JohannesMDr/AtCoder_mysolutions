#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int> >;
typedef long long ll;
#define REP(i, n) for(ll i = 0; i < ll(n); i++)
#define REPD(i, n) for(ll i = n-1; i >= 0; i--)
#define FOR(i, a, b) for(ll i = a; i < ll(b); i++)
#define FORD(i, a, b) for(ll i = a; i > ll(b); i--)
#define ALL(v) v.begin(), v.end()
#define START ios::sync_with_stdio(false);cin.tie(0);

int main() {
  START
  int N, X;
  cin >> N >> X;
  vector<int> v(N), p(N);
  REP(i, N) cin >> v[i] >> p[i];

  double now = 0;
  double x = X;
  REP(i, N) {
    now += (0.01 * (double)v[i] * (double)p[i]);
    if (now > x) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
}