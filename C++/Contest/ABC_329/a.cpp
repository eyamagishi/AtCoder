// AC 2:10
// 出力するだけ
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < (int)s.size(); i++) {
    if(i != 0) cout << ' ';
    cout << s[i];
  }
  cout << endl;
}

// by cn449
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   string s;
//   cin >> s;
//   for (int i = 0; i < s.size() - 1; i++) cout << s[i] << ' ';
//   cout << s.back() << endl;
// }
