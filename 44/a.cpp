#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, bool> m;
  for (int i = 0; i < n; i++) {
    string a, b;
    cin >> a >> b;
    m[a + " " + b] = true;
  }
  cout << m.size() << endl;
  return 0;
}