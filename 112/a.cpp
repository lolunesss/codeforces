#include <bits/stdc++.h>

using namespace std;

int compare(string a, string b) {
  int n = a.size();
  for (int i = 0; i < n; i++) {
    char ca = tolower(a[i]);
    char cb = tolower(b[i]);
    if (ca > cb) return 1;
    else if (ca < cb) return -1;
  }
  return 0;
}

int main() {
  string a, b;
  cin >> a >> b;
  cout << compare(a, b) << endl;
  return 0;
}
