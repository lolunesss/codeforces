#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  char prev = '.';
  for (auto ch: s) {
    if (ch == '.') {
      if (prev == '.') {
        cout << "0";
      } else {
        cout << "1";
      }
      prev = '.';
    } else {
      if (prev == '-') {
        cout << "2";
        prev = '.';
      } else {
        prev = '-';
      }
    } 
  }
  cout << endl;
  return 0;
}
