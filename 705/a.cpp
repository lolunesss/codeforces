#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    if (i != 0) cout << " that ";
    cout << "I " << (i % 2 == 0 ? "hate" : "love");
  }
  cout << " it" << endl;
  return 0;
}
