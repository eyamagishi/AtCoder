#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, k;
  cin >> n >> s >> k;

  int p, q, sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> p >> q;
    sum += p * q;
  }
  if (sum < s) sum += k;

  cout << sum << endl;
}
