#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for(ll i = 0; i < ll(n); i++)
#define REPD(i, n) for(ll i = n-1; i >= 0; i--)
#define FOR(i, a, b) for(ll i = a; i < ll(b); i++)
#define FORD(i, a, b) for(ll i = a; i > ll(b); i--)
#define ALL(v) v.begin(), v.end()
#define START ios::sync_with_stdio(false);cin.tie(0);

int main() {
  START
  int N;
  cin >> N;
  vector<int> a(N);
  REP(i, N) cin >> a[i];

  vector<ll> s(N+1, 0), maxs(N+1, 0), ss(N+2, 0);
  REP(i, N) {
    s[i+1] = s[i] + a[i];
    maxs[i+1] = max(maxs[i], s[i+1]);
  }
  REP(i, N+1) ss[i+1] = ss[i] + s[i];

  ll ans = 0;
  FOR(i, 2, N+1) {
    ans = max(ans, ss[i] + maxs[i-1]);
  }
  ans = max(ans, ss[N+1]);
  cout << ans << endl;
}