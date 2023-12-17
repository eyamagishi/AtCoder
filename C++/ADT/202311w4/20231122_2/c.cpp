// AC 5:48
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<string> S(k);
  for (int i = 0; i < n; i++) {
    if (i < k) cin >> S.at(i);
    else {
      string tmp;
      cin >> tmp;
    }
  }

  sort(S.begin(), S.end());
  for (int i = 0; i < k; i++) cout << S.at(i) << endl;
}

// C - Qualification Contest 解説 by cn449
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//   int n, k;
//   cin >> n >> k;
//   vector<string> a;
//   for (int i = 0; i < n; i++) {
//     string s;
//     cin >> s;
//     if (i < k) a.push_back(s);
//   }
//   sort(a.begin(), a.end());
//   for (string s : a) cout << s << '\n';
// }
