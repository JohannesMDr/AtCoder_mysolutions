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

  int ans = 0;
  int idx = 0;
  FOR(i, 2, 1001) {
    int tmp_ans = 0;
    REP(j, N) {
      if (a[j] % i == 0) tmp_ans++;
    }
    if (ans < tmp_ans) {
      idx = i;
      ans = tmp_ans;
    }
  }
  cout << idx << endl;
}