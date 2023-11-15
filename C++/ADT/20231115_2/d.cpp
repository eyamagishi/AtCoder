// AC(1): 40:30
// グラフ理論
// 単純無向グラフ
// 隣接行列
// 隣接リスト
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> A(m), B(m);
  for (int i = 0; i < m; i++) cin >> A.at(i) >> B.at(i);

  vector<vector<int>> UF(n + 1, vector<int>(0));
  for (int i = 0; i < m; i++) {
    UF.at(A.at(i)).push_back(B.at(i));
    UF.at(B.at(i)).push_back(A.at(i));
  }
  for (int i = 1; i < n + 1; i++) {
    int l = (int)UF.at(i).size();
    sort(UF.at(i).begin(), UF.at(i).end());
    cout << l;
    for(int j = 0; j < l; j++) cout << ' ' << UF.at(i).at(j);
    cout << endl;
  }
}

// 解説 by KoD
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n, m;
//   cin >> n >> m;
//   vector<vector<int>> a(n + 1);
//   for (int i = 0; i < m; ++i) {
//     int u, v;
//     cin >> u >> v;
//     a[u - 1].push_back(v);
//     a[v - 1].push_back(u);
//   }
//   for (int i = 0; i < n; ++i) {
//     sort(begin(a[i]), end(a[i]));
//     cout << a[i].size();
//     for (int a : a[i]) {
//       cout << ' ' << a;
//     }
//     cout << endl;
//   }
// }
