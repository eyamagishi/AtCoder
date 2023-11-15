// AC: 38:32
// 時間計算量の工夫
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> S(n);
  S.at(0) = "1";
  for (int i = 1; i < n; i++) {
    string str = " " + to_string(i + 1) + " ";
    S.at(i) = S.at(i - 1) + str + S.at(i - 1);
  }

  cout << S.at(n - 1) << endl;
}
