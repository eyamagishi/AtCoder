// TLE(1)
// 少ない方を回す
// ABC183Fと似ている
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<vector<int>> C(n + 1, vector<int>(1, 0));
  for (int i = 1; i < n + 1; i++) cin >> C.at(i).at(0);

  for (int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    for (int j = 0; j < (int)C.at(a).size(); j++) {
      if (find(C.at(b).begin(), C.at(b).end(), C.at(a).at(j)) == C.at(b).end()) {
        C.at(b).push_back(C.at(a).at(j));
      }
    }
    C.at(a) = vector<int>(0);
    cout << C.at(b).size() << endl;
  }
}

// 解説 by cn449
// #include <iostream>
// #include <vector>
// #include <set>
// using namespace std;

// int main() {
//   int n, q;
//   cin >> n >> q;
//   vector<set<int>> st(n);
//   for (int i = 0; i < n; i++) {
//     int c;
//     cin >> c;
//     st[i].insert(c);
//   }

//   while (q--) {
//     int a, b;
//     cin >> a >> b;
//     // 0-indexにする
//     a--; b--;
//     if (st[a].size() < st[b].size()) {
//       // bの要素数がaの要素数より多いとき
//       for (int i : st[a]) st[b].insert(i);
//       st[a].clear();
//       cout << st[b].size() << endl;
//     } else {
//       // aの要素数がbの要素数より多いとき
//       for (int i : st[b]) st[a].insert(i);
//       st[b].clear();
//       cout << st[a].size() << endl;
//       // bに入れたいので入れ替える
//       swap(st[a], st[b]);
//     }
//   }
// }
