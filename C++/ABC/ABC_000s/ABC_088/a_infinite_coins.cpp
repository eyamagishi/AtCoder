#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n >> a;
  int rem = n % 500;
  if(rem <= a) {cout << "Yes" << endl;}
  else {cout << "No" << endl;}
  return 0;
}