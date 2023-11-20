#include <bits/stdc++.h>
using namespace std;

// type define
typedef long long ll;
typedef pair<ll, ll> PLL;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<string> VS;
typedef vector<PLL> VP;

// 実行コード
int main() {
  int n;
  cin >> n;
  int T[n];
  for (int i = 0; i < n; i++) cin >> T[i];

  int sum_max = 201;
  for (int i = 0; i < (1 << n); i++) {
    int sum_a = 0, sum_b = 0;
    for (int j = 0; j < n; j++) {
      if((i >> j) & 1) {
        sum_a += T[j];
      } else {
        sum_b += T[j];
      }
    }
    sum_max = min(sum_max, max(sum_a, sum_b));
  }

  cout << sum_max << endl;
}
