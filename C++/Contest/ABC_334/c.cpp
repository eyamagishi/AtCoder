#include <bits/stdc++.h>
using namespace std;

int sum = 10000100;

void def(vector<int> &a, int k, int skip = -1) {
  int ans = 0;
  for (int i = 0; i + 1 < k; i += 2) {
    if(i == skip) {
      i++;
      if (k <= i + 1) continue;
      ans += a.at(i + 1) - a.at(i);
    } else if (i + 1 == skip) {
      if (k <= i + 2) continue;
      ans += a.at(i + 2) - a.at(i);
    } else {
      ans += a.at(i + 1) - a.at(i);
    }
  }

  sum = min(sum, ans);
  return;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(k);
  for (int i = 0; i < k; i++) cin >> a.at(i);

  if (k % 2 == 0) {
    def(a, k);
  } else {
    for (int i = 0; i < k; i++) {
      def(a, k, i);
    }
  }

  cout << sum << endl;
}
