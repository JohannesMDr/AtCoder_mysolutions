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
  int N;
  cin >> N;
  vector<int> a(N), b(N);
  REP(i, N) cin >> a[i];
  REP(i, N) cin >> b[i];

  ll ans = 0;
  REP(i, N) {
    ans += (ll)(a[i] * b[i]);
  }
  if (ans == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}
