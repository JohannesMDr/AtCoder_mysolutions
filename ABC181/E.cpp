#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for(ll i = 0; i < ll(n); i++)
#define REPD(i, n) for(ll i = n-1; i >= 0; i--)
#define FOR(i, a, b) for(ll i = a; i < ll(b); i++)
#define FORD(i, a, b) for(ll i = a; i > ll(b); i--)
#define START ios::sync_with_stdio(false);cin.tie(0);

void insertionSort (int array[], int array_size) {
    int i, j, k;

    for (i = 1; i < array_size; i++) {
        k = array[i];
        j = i - 1;

        while ((j >= 0) && (array[j] > k)) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = k;
    }

}

int main() {
  START
  int N, M;
  cin >> N >> M;
  vector<ll> h(N), w(M);
  REP(i, N) cin >> h[i];
  REP(i, M) cin >> w[i];

  sort(h.begin(), h.end());
  sort(w.begin(), w.end());

  ll ans = 1LL << 60;
  REP(i, w.size()) {
    ll ans_ = 0;
    vector<ll> h_ = h;
    h_.push_back(w[i]);
    sort(h_.begin(), h_.end());
    REP(j, h_.size() / 2) {
      ans_ += abs(h_[j*2+1] - h_[j*2]);
    }
    ans = min(ans, ans_);
    // cout << "ans: " << ans << endl;
  }
  cout << ans << endl;
}