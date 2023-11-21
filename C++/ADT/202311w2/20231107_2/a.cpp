#include <bits/stdc++.h>
using namespace std;

int main() {
  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;

  if (l2 <= l1 && r1 <= r2) {
    cout << r1 - l1 << endl;
  } else if(l1 <= l2 && r2 <= r1) {
    cout << r2 - l2 << endl;
  } else if(l2 <= r1 && r1 < r2) {
    cout << r1 - l2 << endl;
  } else if(l2 <= l1 && l1 <= r2) {
    cout << r2 - l1 << endl;
  } else {
    cout << 0 << endl;
  }
}