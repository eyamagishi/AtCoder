#include <bits/stdc++.h>
using namespace std;

int main() {
  char s1, s2, t1, t2;
  cin >> s1 >> s2 >> t1 >> t2;

  int s = abs(s2 - s1), t = abs(t2 - t1);
  if(s % 3 == t % 3 ||
    ((s == 2 || s == 3)) && (t == 2 || t == 3)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
