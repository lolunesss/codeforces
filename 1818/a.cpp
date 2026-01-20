#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<string> ops(n);
    for (int i = 0; i < n; i++) {
      cin >> ops[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (ops[i] == ops[0]) count++;
    }
    cout << count << endl;
  }

  return 0;
}