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
  int P = 1 << N;
  vector<int> a(P);
  REP(i, P) cin >> a[i];

  int ans;
  auto iter = max_element(ALL(a));
  int max_index = distance(a.begin(), iter);
  if (max_index < (P / 2)) {
    auto start_iter = a.begin() + (P / 2);
    ans = max_element(start_iter, a.end()) - a.begin() + 1;
  } else {
    auto start_iter = a.begin();
    ans = max_element(start_iter, a.begin() + (P / 2)) - a.begin() + 1;
  }
  cout << ans << endl;
}

// int main() {
//   START
//   int N;
//   cin >> N;
//   int twon = pow(2, N);
//   vector<pair<int,int>> a(twon);
//   REP(i, twon) {
//     a[i].first = i+1;
//     cin >> a[i].second;
//   }

//   vector<pair<int,int>> b(a.size());
//   copy(ALL(a), b.begin());
//   REP(i, N) {
//     int p = pow(2, N-i);
//     vector<pair<int,int>> c;
//     REP(j, p) {
//       if (b[j*2].second > b[j*2+1].second) {
//         c.push_back(b[j*2]);
//       }
//       else {
//         c.push_back(b[j*2+1]);
//       }
//     }
//     cout << c[0].second << endl;
//     vector<pair<int,int>> b(c.size());
//     copy(ALL(c), b.begin());

//     if (i == N-1) {
//       cout << c.size() << endl;
//       if (c[0].second < c[1].second) cout << c[0].first << endl;
//       else cout << c[1].first << endl;
//     }
//   }
//   // cout << b[0].first << b[0].second << endl;
//   // if (b[0].second < b[1].second) cout << b[0].first << endl;
//   // else cout << b[1].first << endl;
// }