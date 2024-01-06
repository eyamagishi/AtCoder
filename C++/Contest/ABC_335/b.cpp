#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int x = 0; x <= n; x++) {
    for (int y = 0; x + y <= n; y++) {
      for (int z = 0; x + y + z <= n; z++) {
        cout << x << ' ' << y << ' ' << z << endl;
      }
    }
  }
}
