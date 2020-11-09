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
  ll N;
  cin >> N;

  string s = to_string(N);
  int slen = s.size();
  int ans = slen;
  REP(bit, 1<<slen) {
    int tmp = 0;
    int tmp_ans = slen;
    REP(i, slen) {
      if (bit & (1<<i)) {
        tmp += (s[i] - '0');
        tmp_ans--;
      }
    }
    if (tmp % 3 == 0) {
      ans = min(ans, tmp_ans);
    }
  }
  if (ans != slen) cout << ans << endl;
  else cout << "-1" << endl;
}