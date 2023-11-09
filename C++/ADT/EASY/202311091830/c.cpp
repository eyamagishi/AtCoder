// AC
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s.at(i);
  }

  for (int i = 0; i < n; i++) {
    if (i == 0) cout << s.at(i);
    else cout << s.at(i) - s.at(i-1);
    if (i != n - 1) cout << ' ';
    else cout << endl;
  }
}