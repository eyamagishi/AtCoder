#include <bits/stdc++.h>
using namespace std;

int main() {
  int cnt = 0;
  for (int i = 0; i < 3; i++) {
    char s;
    cin >> s;
    if (s == '1') cnt++;
  }

  cout << cnt << endl;
}
