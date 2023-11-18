// 未提出
// ランレングス圧縮
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  vector<string> str(0);
  for (int i = 0; i < n; i++) {
    string str_tmp = string(&s[i]);
    if (find(str.begin(), str.end(), str_tmp) == str.end()) {
      str.push_back(str_tmp);

      int j = i + 1;
      bool flg = true;
      while (flg && j < n) {
        str_tmp += string(&s[j]);
        if (find(str.begin(), str.end(), str_tmp) == str.end()) {
          str.push_back(str_tmp);
          j++;
        } else {
          flg = false;
        }
      }
    }
  }

  cout << str.size() << endl;
}

// 解説 by yuto1115
// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//   int n;
//   string s;
//   cin >> n >> s;

//   vector<int> mx(26);
//   int l = 0;
//   while (l < n) {
//     int r = l + 1;
//     while (r < n and s[l] == s[r]) ++r;
//     int c = s[l] - 'a';
//     mx[c] = max(mx[c], r - l);
//     l = r;
//   }
//   int ans = 0;
//   for (int i = 0; i < 26; i++) {
//     ans += mx[i];
//   }
//   cout << ans << endl;
// }
