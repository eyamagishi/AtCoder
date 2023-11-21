// 未提出
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  string s;
  cin >> n >> m >> s;
  vector<int> C(n), last_index(m + 1, 0);
  vector<vector<int>> Color(m, vector<int>(0));
  for (int i = 0; i < n; i++) {
    cin >> C.at(i);
    last_index.at(C.at(i)) = i;
    Color.at(C.at(i)).push_back(i);
  }

  for (int i = 0; i < m; i++) {
    if (last_index.at(i) == 0) continue;
    int res = last_index.at(C.at(i));
    for (int j = 0; j < (int)Color.at(C.at(i)).size(); j++) {

    }
  }
}

// E - Rotate Colored Subsequence 解説 by leaf1415
// #include <iostream>
// #include <vector>
// using namespace std;

// int n, m;
// string s;
// int c[200000];
// vector<int> p[200001];

// int main(void)
// {
//   cin >> n >> m;
//   cin >> s;
//   for(int i = 0; i < n; i++) cin >> c[i];
//   for(int i = 0; i < n; i++) p[c[i]].push_back(i);

//   string t(n, '?');
//   for(int i = 1; i <= m; i++){
//     int k = p[i].size();
//     for(int j = 0; j < k; j++) t[p[i][(j+1)%k]] = s[p[i][j]];
//   }
//   cout << t << endl;

//   return 0;
// }
