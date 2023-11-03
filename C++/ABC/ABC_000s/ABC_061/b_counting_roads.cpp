#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> cnt(n, 0);
  for(int i=0;i < m;i++) {
    int a, b;
    cin >> a >> b;
    cnt.at(a - 1)++;
    cnt.at(b - 1)++;
  }
  for(int i=0;i < n;i++) {
    cout << cnt.at(i) << endl;
  }
}