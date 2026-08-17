#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int used[26] = { 0 };
  int n = s.size();
  int c = 0;
  for (int i = 0; i < n; i++) {
    if (used[s[i] - 'a'] == 0) c++;
    used[s[i] - 'a'] = 1;
  }
  if (c & 1) {
    cout << "IGNORE HIM!" << endl;
  } else {
    cout << "CHAT WITH HER!" << endl;
  }
  return 0;
}
