#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ns(n);
    for (int i = 0; i < n; i++) {
      cin >> ns[i];
    }
    vector<int> os;
    os.push_back(ns[0]);
    for (int i = 1; i < n; i++) {
      if (ns[i] < ns[i - 1]) {
        os.push_back(max(ns[i] - 1, 1));
      }
      os.push_back(ns[i]);
    }
    cout << os.size() << endl;
    for (int i = 0; i < os.size(); i++) {
      if (i != 0) cout << " ";
      cout << os[i];
    }
    cout << endl;
  }

  return 0;
}