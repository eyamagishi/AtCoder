#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, origin_n , x = 0;
  cin >> N;
  origin_n = N;
  while(N % 10 != 0) {
    x += N % 10;
    N /= 10;
  }
  if(origin_n % x == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}