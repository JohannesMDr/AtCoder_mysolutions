#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int N;
  cin >> N;

  ll ans = 0;
  for (int A = 1; A < N; ++A) {
    ans += (N - 1) / A;
  }
  cout << ans << endl;
}