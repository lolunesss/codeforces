#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ds(n - 1);
  for (auto& d : ds) {
    cin >> d;
  }

  int a, b;
  cin >> a >> b;

  int s = 0;
  for (int i = a - 1; i < b - 1; i++) {
    s += ds[i];
  }
  cout << s << endl;
  return 0;
}