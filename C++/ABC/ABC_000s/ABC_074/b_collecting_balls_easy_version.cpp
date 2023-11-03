#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, sum=0;
  cin >> n >> k;
  int x[n];
  for(int i=0;i < n;i++) {cin >> x[i];}
  for(int i=0;i < n;i++) {
    if(x[i] <= k - x[i]) {
      sum += 2 * x[i];
    } else {
      sum += 2 * (k - x[i]);
    }
  }
  cout << sum << endl;

  return 0;
}

// repを使用する(マクロなので厳密には使わない方がよい？)
// min()を使用した方がよい