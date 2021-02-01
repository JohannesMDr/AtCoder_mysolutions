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
  int N, M; cin >> N >> M;
  vector<int> a(M), b(M);
  REP(i, M) cin >> a[i] >> b[i];
  int K; cin >> K;
  vector<int> c(K), d(K);
  REP(i, K) cin >> c[i] >> d[i];

  unsigned int flag = (1 << K);
  int ans = 0;
  REP(bit, flag) {
    vector<int> num(N+1, 0);
    REP(i, K) {
      if (bit & (1<<i)) num[c[i]]++;
      else num[d[i]]++;
    }
    int new_ans = 0;
    REP(i, M) {
      if (num[a[i]]>0 && num[b[i]]>0) new_ans++;
    }
    // cout << bit << " " << new_ans << endl;
    // REP(i, N) cout << num[i] << endl;
    if (new_ans > ans) ans = new_ans;
  }
  cout << ans << endl;
}