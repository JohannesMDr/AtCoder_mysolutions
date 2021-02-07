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
  vector<ll> a2b(N);
  ll asum = 0;
  REP(i, N) {
    ll a, b;
    cin >> a >> b;
    a2b[i] = a * 2 + b;
    asum += a;
  }

  sort(ALL(a2b), greater<ll>{});
  int ans = 0;
  REP(i, N) {
    asum -= a2b[i];
    ans++;
    if (asum < 0) {
      cout << ans << endl;
      return 0;
    }
  }
}