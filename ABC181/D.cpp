#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for(ll i = 0; i < ll(n); i++)
#define REPD(i, n) for(ll i = n-1; i >= 0; i--)
#define FOR(i, a, b) for(ll i = a; i < ll(b); i++)
#define FORD(i, a, b) for(ll i = a; i > ll(b); i--)
#define START ios::sync_with_stdio(false);cin.tie(0);

int main() {
  START
  string s;
  cin >> s;

  int digit, start, stop;
  if (s.size() >= 3) {digit = 3; start = 13; stop = 125;}
  else if (s.size() == 2) {digit = 2; start = 2; stop = 13;}
  else if (s.size() == 1) {digit = 1; start = 1; stop = 2;}

  bool ans = false;
  FOR(i, start, stop) {
    string eight = to_string(i * 8);
    string s_ = s;
    vector<bool> ans_(3, false);
    if (digit == 1) {ans_[1] = true; ans_[2] = true;}
    else if (digit == 2) ans_[2] = true;
    REP(j, digit) {
      ll position = s_.find(eight[j]);
      if (position != string::npos) {
        ans_[j] = true;
        s_.erase(position, 1);
      }
    }
    if (ans_[0] && ans_[1] && ans_[2]) ans = true;
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}