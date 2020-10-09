#include <iostream>
#include <vector>
const int INF = 1e9;
using namespace std;

int main() {
  int N, A;
  cin >> N;

  int ans = INF;
  for (int i = 0; i < N; ++i) {
    int ans_tmp = 0;
    cin >> A;
    while ((A % 2) == 0) {
      ans_tmp++;
      A /= 2;
    }
    ans = min(ans, ans_tmp);
  }
  cout << ans << endl;
}