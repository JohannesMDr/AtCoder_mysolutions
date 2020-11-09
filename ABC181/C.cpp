#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for(ll i = 0; i < ll(n); i++)
#define REPD(i, n) for(ll i = n-1; i >= 0; i--)
#define FOR(i, a, b) for(ll i = a; i < ll(b); i++)
#define FORD(i, a, b) for(ll i = a; i > ll(b); i--)
#define START ios::sync_with_stdio(false);cin.tie(0);

int main() {
  START
  int N;
  cin >> N;
  vector<int> x(N), y(N);
  REP(i, N) cin >> x[i] >> y[i];

  bool ans = false;
  FOR(i, 0, N) {
    FOR(j, i+1, N) {
      FOR(k, j+1, N) {
        if ((x[j] - x[i]) * (y[k] - y[j]) == (x[k] - x[j]) * (y[j] - y[i])) ans = true;
      }
    }
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;

}