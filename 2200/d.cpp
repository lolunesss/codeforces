#include <bits/stdc++.h>

using namespace std;

vector<int> lex_vec(vector<int> ns) {
  vector<int> result;
  int n = ns.size();
  auto it = min_element(ns.begin(), ns.end());
  int min_index = distance(ns.begin(), it);
  for (int i = 0; i < ns.size(); i++) {
    result.push_back(ns[(i + min_index) % n]);
  }
  return result;
}

void print_vect(vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
    if (i != v.size() - 1) cout << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> left;
    vector<int> right;
    vector<int> middle;
    int a;
    for (int i = 0; i < n; i++) {
      cin >> a;
      if (i < x) {
        left.push_back(a);
      } else if (i >= x && i < y) {
        middle.push_back(a);
      } else {
        right.push_back(a);
      }
    }
    middle = lex_vec(middle);
    vector<int> outer = left;
    outer.insert(outer.end(), right.begin(), right.end());
    int ind = 0;
    while (ind < outer.size() && outer[ind] < middle[0]) {
      ind++;
    }

    vector<int> result = outer;
    auto it = result.begin() + ind;
    result.insert(it, middle.begin(), middle.end());

    print_vect(result);
  }
  return 0;
}