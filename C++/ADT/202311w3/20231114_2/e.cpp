// 未提出
// ソート, ラムダ式, 数字に変換
#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  int n;
  cin >> x >> n;
  vector<string> S(n);
  for (int i = 0; i < n; i++) {
    string st;
    cin >> st;
    S.at(i) = st;
  }

  sort(S.begin(), S.end(), x);

  for (int i = 0; i < n; i++) cout << S.at(i) << endl;
}

// 解説 by KoD
// 方針 1. 比較関数を実装する
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   string X;
//   cin >> X;
//   // 何番目に小さいか表す配列を生成
//   vector<int> pos(26);
//   for (int i = 0; i < 26; ++i) {
//     pos[X[i] - 'a'] = i;
//   }
//   int N;
//   cin >> N;
//   vector<string> S(N);
//   for (string& s : S) cin >> s;
//   sort(begin(S), end(S), [&](const string& s, const string& t) {
//     // 文字列の比較
//     int len = min(s.size(), t.size());
//     for (int i = 0; i < len; ++i)
//       if (s[i] != t[i])
//         return pos[s[i] - 'a'] < pos[t[i] - 'a'];
//     return s.size() < t.size();
//   });
//   for (const string& s : S) cout << s << endl;
// }

// 方針 2. 別の数列に置き換えてからソートを行う
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   string X;
//   cin >> X;
//   vector<int> pos(26);
//   for (int i = 0; i < 26; ++i) pos[X[i] - 'a'] = i;
//   int N;
//   cin >> N;
//   vector<vector<int>> S(N);
//   for (vector<int>& v : S) {
//     string s;
//     cin >> s;
//     for (const char c : s) {
//       v.push_back(pos[c - 'a']);
//     }
//   }

//   sort(begin(S), end(S));
//   for (const vector<int>& s : S) {
//     for (const int x : s) cout << X[x];
//     cout << endl;
//   }
//   return 0;
// }
