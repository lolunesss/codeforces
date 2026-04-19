#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);

    int num = -1;
    for (auto& ni : ns) {
      cin >> ni;
      num &= ni;
    }
    cout << num << endl;
  }
  return 0;
}
