#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int g = 1;
  string s;
  cin >> s;
  string prev = s;
  for (int i = 1; i < n; i++) {
    cin >> s;
    if (s != prev) g++;
    prev = s;
  }
  cout << g << endl;
  return 0;
}
