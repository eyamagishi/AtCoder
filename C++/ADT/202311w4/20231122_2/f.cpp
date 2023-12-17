// TLE
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<long> A(n), B(m);
  for (int i = 0; i < n; i++) cin >> A.at(i);
  for (int i = 0; i < m; i++) cin >> B.at(i);

  long sum_min = abs(A.at(0) - B.at(0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      sum_min = min(sum_min, abs(A.at(i) - B.at(j)));
    }
  }

  cout << sum_min << endl;
}
