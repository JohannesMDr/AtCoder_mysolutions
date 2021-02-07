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
  int N; cin >> N;
  vector<int> x(N), y(N);
  REP(i, N) cin >> x[i] >> y[i];

  int ans = 0;
  REP(i, N) {
    FOR(j, i+1, N) {
      int delta_x = x[j] - x[i];
      int delta_y = y[j] - y[i];
      if (-delta_x*delta_x<=delta_y*delta_x && delta_y*delta_x<=delta_x*delta_x) ans++;
    }
  }
  cout << ans << endl;
}