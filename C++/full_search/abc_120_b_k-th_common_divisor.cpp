#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned int a, b, k;
  cin >> a >> b >> k;

  vector<int> div;
  for (int i = 1; i <= a; i++) {
    if (a % i == 0 && b % i == 0) {
      div.push_back(i);
    }
  }
  reverse(div.begin(), div.end());

  cout << div.at(k - 1) << endl;
}
