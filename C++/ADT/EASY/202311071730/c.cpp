#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << fixed << std::setprecision(7);
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) cin >> x.at(i) >> y.at(i);

  double max = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
      double l = sqrt(pow(double(x.at(i) - x.at(j)), 2) + pow(double(y.at(i) - y.at(j)), 2));
      if (max < l) max = l;
    }
  }

  cout << max << endl;
}