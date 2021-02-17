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

ll gcd(ll x, ll y) {
    if(x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y);
    }
}

ll modinv(ll a, ll m) {
    ll b = m, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

ll solve() {
    ll N, S, K; cin >> N >> S >> K;
    ll g = gcd(N, K);
    if (S % g) {
      return -1;
    } else {
      N /= g, S /= g, K /= g;
      ll K_inv = modinv(K, N);
      ll ans = ((- K_inv * S) % N + (N * g)) % N;
      return ans;
    }
}

int main() {
  START
  int N; cin >> N;
  REP(i, N) {
    cout << solve() << endl;
  }
}