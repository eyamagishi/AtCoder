#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> A(k);
  for (int i = 0; i < k; i++) cin >> A.at(i);
  for (int i = 0; i < q; i++) {
    int l;
    cin >> l;
    if (A.at(l - 1) < n && (A.at(l - 1) + 1 == A.at(l))) {

    }
  }
}
