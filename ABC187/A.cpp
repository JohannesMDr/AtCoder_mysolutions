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
  int A, B; cin >> A >> B;

  vector<int> sa(3), sb(3);
  REP(i, 3) {
    sa[i] = A % 10;
    sb[i] = B % 10;
    A = A / 10;
    B = B / 10;
  }
  int sum_a = sa[0]+sa[1]+sa[2];
  int sum_b = sb[0]+sb[1]+sb[2];
  if (sum_a > sum_b) cout << sum_a << endl;
  else cout << sum_b << endl;
}