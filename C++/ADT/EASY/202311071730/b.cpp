#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++) cin >> p.at(i);

  int strong = p.at(0), strong_num = 0;
  for (int i = 1; i < n; i++) {
    int num = 0;
    bool search = true;
    while (search) {
      if (strong + num > p.at(i)) {
        if (strong_num < num) strong_num = num;
        search = false;
      }
      num++;
    }
  }

  cout << strong_num << endl;
}