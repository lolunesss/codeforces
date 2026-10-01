#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> hc(n);
  vector<int> ac(n);
  for (int i = 0; i < n; i++) {
    cin >> hc[i] >> ac[i];
  }
  int c = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (hc[i] == ac[j]) c++;
    }
  }
  cout << c << endl;
  return 0;
}
