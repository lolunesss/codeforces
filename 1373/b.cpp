#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int n = s.size();
    stack<char> st;

    int c = 0;
    for (int i = 0; i < n; i++) {
      if (st.empty() || s[i] == st.top()) {
        st.push(s[i]);
      } else {
        c++;
        st.pop();
      }
    }
    cout << (c & 1 ? "DA" : "NET") << endl;
  }
  return 0;
}