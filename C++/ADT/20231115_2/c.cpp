// AC: 10:38
// 制約が小さい
// 全探索
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> S(n);
  for (int i = 0; i < n; i++) cin >> S.at(i);

  for (int i = 0; i < n; i++) {
    if((S.at(i).at(0) == 'H' || S.at(i).at(0) == 'D' || S.at(i).at(0) == 'C' || S.at(i).at(0) == 'S') &&
      S.at(i).at(1) == 'A' || S.at(i).at(1) == '2' || S.at(i).at(1) == '3' || S.at(i).at(1) == '4' ||
      S.at(i).at(1) == '5' || S.at(i).at(1) == '6' || S.at(i).at(1) == '7' || S.at(i).at(1) == '8' ||
      S.at(i).at(1) == '9' || S.at(i).at(1) == 'T' || S.at(i).at(1) == 'J' || S.at(i).at(1) == 'Q' || S.at(i).at(1) == 'K') {
        for (int j = i + 1; j < n; j++) {
          if(S.at(i) == S.at(j)) {
            cout << "No" << endl;
            return 0;
          }
        }
    } else {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}

// 解説 by cn449
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   vector<string> s(n);
//   for (int i = 0; i < n; i++) cin >> s[i];
//   bool ans = true;
//   for (int i = 0; i < n; i++) for (int j = 0; j < i; j++) if (s[i] == s[j]) ans = false;
//   string s1 = "HDCS";
//   string s2 = "A23456789TJQK";
//   for (int i = 0; i < n; i++) {
//     if (!count(s1.begin(), s1.end(), s[i][0]) || !count(s2.begin(), s2.end(), s[i][1])) ans = false;
//   }
//   cout << (ans ? "Yes" : "No") << '\n';
// }
