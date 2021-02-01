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
  ll N; cin >> N;

  ll ans = 0;
  ll M = 2*N;
  for (ll i=1; i*i <= M; i++) {
    if (M % i == 0) {
      if (i % 2 == 0 && (M/i) % 2 == 1) ans += 2;
      else if (i % 2 == 1 && (M/i) % 2 == 0) ans += 2;
    }
  }
  cout << ans << endl;
}