#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> d(n);
  for (int i = 0; i < n; i++) cin >> d.at(i);

  sort(d.rbegin(), d.rend());
  int max = 101, cnt = 0;
  for (int i = 0; i < n; i++) {
    if(d.at(i) < max) {
      cnt++;
      max = d.at(i);
    }
  }

  cout << cnt << endl;
}
