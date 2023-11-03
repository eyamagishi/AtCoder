#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, left, right, sum = 0;
  cin >> N;
  for(int i=0;i<N;i++) {
    cin >> left >> right;
    sum += right - left + 1;
  }
  cout << sum << endl;
  return 0;
}