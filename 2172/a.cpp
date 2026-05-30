#include <bits/stdc++.h>

using namespace std;

int main() {
  int g, c, l;
  cin >> g >> c >> l;
  vector<int> ss;
  ss.push_back(g);
  ss.push_back(c);
  ss.push_back(l);
  sort(ss.begin(), ss.end());
  if (ss[2] - ss[0] < 10) {
    cout << "final" << " " << ss[1] << endl;
  } else {
    cout << "check again" << endl;
  }
  return 0;
}