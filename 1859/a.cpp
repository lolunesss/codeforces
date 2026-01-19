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
    sort(ns.begin(), ns.end());
    if (ns[0] == ns[ns.size() - 1]) {
      cout << -1 << endl;
      continue;
    }
    int index = 0;
    while (ns[index] == ns[0]) {
      index++;
    }

    cout << index << " " << ns.size() - index << endl;
    for (int i = 0; i < index; i++) {
      cout << ns[i];
      if (i != index - 1) cout << " ";
    }
    cout << endl;

    for (int i = index; i < ns.size(); i++) {
      cout << ns[i];
      if (i != ns.size() - 1) cout << " ";
    }
    cout << endl;
  }

  return 0;
}