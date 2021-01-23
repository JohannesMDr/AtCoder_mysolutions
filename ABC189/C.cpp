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
  vector<int> a(N);
  REP(i, N) cin >> a[i];

  int ans = 0;
  REP(l, N) {
    int m = a[l];
    FOR(r, l, N) {
      if (m > a[r]) m = a[r];
      if (m*(r-l+1) > ans) ans = m*(r-l+1);
    }
  }
  cout << ans << endl;
}
