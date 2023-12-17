// WA
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int cnt = 0;
  vector<int> ans(5,0);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    ans.at(0) = 1;
    vector<int> ans_tmp(5, 0);
    for (int j = 0; j < 5; j++) {
      if (ans.at(j) == 1) {
        if (j + a < 5) {
          ans_tmp.at(j + a) = 1;
        } else {
          cnt++;
        }
      }
    }
    ans = ans_tmp;
  }

  cout << cnt << endl;
}
