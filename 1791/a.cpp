#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  string cf = "codeforces";
  while (t--) {
    char ch;
    cin >> ch;
    if (cf.find(ch) == string::npos) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
