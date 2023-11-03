#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, sum = 0;
  char op;
  cin >> a >> op >> b;
  if(op == '+') {
    sum = a + b;
  } else {
    sum = a - b;
  }
  cout << sum << endl;
  return 0;
}