#include <iostream>
#include <vector>
#include <string>
const int INF = 1e9;
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
  fio;
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i = 0; i < H; ++i) {
    cin >> S[i];
  }

  int ans = 0;
  for (int h = 0; h < H; ++h) {
    for (int w = 0; w < W; ++w) {
      if (S[h][w] == '.') {
        if (h + 1 < H) {
          if (S[h+1][w] == '.') ans++;
        }
        if (w + 1 < W) {
          if (S[h][w+1] == '.') ans++;
        }
      }
    }
  }
  cout << ans << endl;
}