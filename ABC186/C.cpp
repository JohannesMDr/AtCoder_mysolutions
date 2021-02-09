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

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int a = i, b = i;
    bool flag = true;
    while (a > 0) {
      if (a % 10 == 7) {
        flag = false;
        break;
      }
      a = a / 10;
    }

    while (b > 0) {
      if (b % 8 == 7) {
        flag = false;
        break;
      }
      b = b / 8;
    }

    if (flag) ans++;
  }
  cout << ans << endl;
}