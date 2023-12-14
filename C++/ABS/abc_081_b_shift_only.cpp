#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a.at(i);

  int cnt = 0;
  while(true) {
    for (int i = 0; i < n; i++) {
      if (a.at(i) % 2 == 1) {
        cout << cnt << endl;
        return 0;
      } else {
        a.at(i) /= 2;
      }
    }
    cnt++;
  }
}
