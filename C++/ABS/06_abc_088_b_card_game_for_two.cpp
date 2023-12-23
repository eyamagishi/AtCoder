#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a.at(i);
  sort(a.rbegin(), a.rend());

  int alice = 0, bob = 0;
  for (int i = 0; i < n; i++) {
    if(i % 2 == 0) alice += a.at(i);
    else bob += a.at(i);
  }

  cout << alice - bob << endl;
}
