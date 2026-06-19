#include <bits/stdc++.h>

using namespace std;

int find_char(string s, char c, int st) {
  while (st < s.size()) {
    if (s[st] == c) {
      return st;
    }
    st++;
  }
  return -1;
}

int main() {
  string s;
  cin >> s;

  string heidi = "heidi";

  int index = 0;
  int st = -1;
  bool fake = true;
  while (index < 5) {
    st = find_char(s, heidi[index], st + 1);
    if (st == -1) {
      fake = false;
      break;
    } else {
      index += 1;
    }
  }

  if (fake) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}