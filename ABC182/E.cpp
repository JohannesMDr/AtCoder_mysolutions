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
  int H, W, N, M;
  vector<pair<int, int> > bulb(N), block(M);
  REP(i, N) cin >> bulb[i].first >> bulb[i].second;
  REP(i, M) cin >> block[i].first >> block[i].second;


}