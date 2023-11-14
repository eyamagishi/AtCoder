#include <bits/stdc++.h>
using namespace std;

constexpr int MAX__ = 200200;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> s(q), t(q);
  vector<vector<int>> a(n);
  for (int i = 0; i < n; i++) {
    int l;
    cin >> l;
    for (int j = 0; j < l; j++) {
      int pre_a;
      cin >> pre_a;
      a.at(i).push_back(pre_a);
    }
  }
  for(int i = 0; i < q; i++) cin >> s.at(i) >> t.at(i);

  for(int i = 0; i < q; i++) {
    cout << a.at(s.at(i) - 1).at(t.at(i) - 1) << endl;
  }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, q;
//     cin >> n >> q;
//     vector<vector<int>> a(n);
//     for (int i = 0; i < n; ++i) {
//         int l;
//         cin >> l;
//         a[i] = vector<int>(l);
//         for (int j = 0; j < l; ++j) {
//             cin >> a[i][j];
//         }
//     }
//     for (int k = 0; k < q; ++k) {
//         int s, t;
//         cin >> s >> t;
//         cout << a[s - 1][t - 1] << '\n';
//     }
//     return 0;
// }
