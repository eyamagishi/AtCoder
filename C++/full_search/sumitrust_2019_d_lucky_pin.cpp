#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  set<string> pin;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        string tmp = string(1, s[i]) + string(1, s[j]) + string(1, s[k]);
        pin.insert(tmp);
      }
    }
  }

  cout << pin.size() << endl;
}
