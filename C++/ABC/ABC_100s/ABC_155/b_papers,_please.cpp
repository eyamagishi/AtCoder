#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a.at(i);

  for (int i = 0; i < n; i++) {
    if (a.at(i) % 2 != 0) continue;
    if (a.at(i) % 3 != 0 && a.at(i) % 5 != 0) {
      cout << "DENIED" << endl;
      return 0;
    }
  }

  cout << "APPROVED" << endl;
}
