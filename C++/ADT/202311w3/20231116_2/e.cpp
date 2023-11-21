#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << fixed << setprecision(6);
  int n, k;
  cin >> n >> k;
  int A[k + 1], X[n + 1], Y[n + 1];
  for (int i = 1; i < k + 1; i++) cin >> A[i];
  for (int i = 1; i < n + 1; i++) cin >> X[i] >> Y[i];

  double r_min = 0;
  for (int i = 1; i < k + 1; i++) {
    int num = A[i];
    double r_tmp = 0;
    for (int j = 1; j < n + 1; j++) {
      if (j == num) continue;
      double tmp = sqrt(
        double(abs(X[num] - X[j]) * abs(X[num] - X[j])) +
        double(abs(Y[num] - Y[j]) * abs(Y[num] - Y[j]))
      );
      if (r_tmp < tmp) r_tmp = tmp;
    }
    if (r_min == 0 || r_min > r_tmp) r_min = r_tmp;
  }

  cout << r_min << endl;
}
