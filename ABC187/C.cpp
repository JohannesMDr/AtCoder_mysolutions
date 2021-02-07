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
  vector<string> s(N);
  REP(i, N) cin >> s[i];

  vector<string> v1, v2, inters;
  REP(i, N) {
    if (s[i][0]=='!') v2.push_back(s[i].substr(1));
    else v1.push_back(s[i]);
  }
  sort(ALL(v1)); sort(ALL(v2));
  set_intersection(ALL(v1), ALL(v2), inserter(inters, inters.end()));
  if (inters.size() == 0) cout << "satisfiable" << endl;
  else cout << inters[0] << endl;
}