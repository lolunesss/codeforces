#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  string n = "";
  cin >> s;
  vector<int> numbers;
  s += '-';
  for (char ch: s) {
    if (ch == '+' || ch == '-') {
      numbers.push_back(stoi(n));
      n = "";
    } else {
      n += ch;
    }
  }
  sort(numbers.begin(), numbers.end());
  for (int i = 0; i < numbers.size(); i++) {
    cout << (i != 0 ? "+" : "") << numbers[i];
  }
  cout << endl;
  return 0;
}
