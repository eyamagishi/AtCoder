// AC 48:12
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int size = 2 * n + 1;
  vector<int> takahashi(size + 1, 0);
  takahashi.at(0) = 1;

  for (int i = 1; i < size + 1; i++) {
    if (takahashi.at(i) == 0) {
      cout << i << endl << flush;
      int tmp;
      cin >> tmp;
      if (tmp == 0) return 0;
      takahashi.at(tmp) = 1;
    }
  }
}
