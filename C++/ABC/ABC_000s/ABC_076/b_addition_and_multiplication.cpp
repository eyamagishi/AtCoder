#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, origin = 1;
  cin >> n >> k;
  for(int i=0;i < n;i++) {
    if(origin < k) {
      origin *= 2;
    } else {
      origin += k;
    }
  }
  cout << origin << endl;
  return 0;
}