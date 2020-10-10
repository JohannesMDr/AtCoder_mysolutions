#include <iostream>
#include <vector>
#include <string>
#include <set>
const int INF = 1e9;
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
  fio;
  int N;
  cin >> N;
  vector<int> P(N);
  for (int i = 0; i < N; ++i) cin >> P[i];

  set<int> seen;
  int ans = 0;
  for (int n = 0; n < N; ++n) {
    seen.insert(P[n]);
    if (ans == P[n]) {
      while (seen.count(ans)) {
        ans++;
      }
    }
    cout << ans << endl;
  }
}