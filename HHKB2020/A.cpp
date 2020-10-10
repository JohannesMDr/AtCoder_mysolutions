#include <iostream>
#include <vector>
const int INF = 1e9;
using namespace std;

int main() {
  char S, T;
  cin >> S;
  cin >> T;
  if (S == 'Y') cout << (char)toupper(T) << endl;
  else cout << T << endl;
}