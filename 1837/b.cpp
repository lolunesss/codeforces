#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    char p = s[0];
    int mc = 1;
    int c = 1;
    for (int i = 1; i < n; i++) {
      if (s[i] == p) {
        c++;
      } else {
        c = 1;
      }
      mc = max(c, mc);
      p = s[i];
    }
    cout << mc + 1 << endl;
  }
  return 0;
}