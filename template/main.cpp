#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

long long solve() {
    long long N, S, K;
    cin >> N >> S >> K;
    long long g = gcd(N, K);
    if (S % g) return -1;
    N /= g, S /= g, K /= g;
    modint::set_mod(N);
    modint res = -modint(S) / K;
    return res.val();
}

int main(){
    int T;
    cin >> T;
    while (T--) cout << solve() << endl;
}