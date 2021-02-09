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
  int H, W; cin >> H >> W;
  int s = 0;
  int m = 1000;
  REP(i, H*W) {
    int a; cin >> a;
    if (a < m) m = a;
    s += a;
  }
  cout << s - m * H * W << endl;
}