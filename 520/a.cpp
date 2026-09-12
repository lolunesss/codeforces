#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int a[26] = { 0 };
  int c = 0;
  for (auto ch: s) {
    int index = tolower(ch) - 'a';
    if (a[index] == 0) c++;
    a[index] = 1;
  }
  cout << (c == 26 ? "YES" : "NO") << endl;

  return 0;
}
