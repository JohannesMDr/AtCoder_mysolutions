#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int> > D(N);
  for (int i = 0; i < N; ++i) cin >> D[i].first >> D[i].second;

  bool ans = false;
  for (int i = 0; i < N; ++i) {
    if (i > 1 && D[i].first == D[i].second && D[i-1].first == D[i-1].second && D[i-2].first == D[i-2].second) ans = true;
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}