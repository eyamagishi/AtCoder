#include <bits/stdc++.h>
using namespace std;

int n;

bool dfs(vector<vector<char>> &S, int y, int x) {
  for (x; x < n; x++) {
    for (y; y < n; y++) {
      if (S.at(y).at(x) == '#') continue;
      S.at(y).at(x) = '#';
      if (dfs(S, y, x)) cout << "Yes" << endl;
      S.at(y).at(x) = '.';
    }
  }

  return true;
}

int main() {
  cin >> n;
  vector<vector<char>> S(n, vector<char>(n));
  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) cin >> S.at(y).at(x);
  }

  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      if (S.at(y).at(x) == '#') continue;
      S.at(y).at(x) = '#';
      if (dfs(S, y, x)) cout << "Yes" << endl;
      S.at(y).at(x) = '.';
    }
  }

  cout << "No" << endl;
}

// F - Connect 6 解説 by mechanicalpenciI
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for(int i = 0; i < n; ++i)

// int main(void) {
//   int n, cnt;
//   bool ans = false;
//   vector<string>a;
//   string str;

//   cin >> n;
//   for (int i = 0; i < n; i++){
//     cin >> str;
//     a.push_back(str);
//   }

//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       if ((i + 5) < n) {
//         cnt = 0;
//         for (int k = 0; k < 6; k++)if (a[i + k][j] == '#')cnt++;
//         if (cnt >= 4)ans = true;
//       }
//       if ((j + 5) < n) {
//         cnt = 0;
//         for (int k = 0; k < 6; k++)if (a[i][j + k] == '#')cnt++;
//         if (cnt >= 4)ans = true;
//       }
//       if (((i + 5) < n) && ((j + 5) < n)) {
//         cnt = 0;
//         for (int k = 0; k < 6; k++)if (a[i + k][j + k] == '#')cnt++;
//         if (cnt >= 4)ans = true;
//       }
//       if ((0 <= (i - 5)) && ((j + 5) < n)) {
//         cnt = 0;
//         for (int k = 0; k < 6; k++)if (a[i - k][j + k] == '#')cnt++;
//         if (cnt >= 4)ans = true;
//       }
//     }
//   }

//   if (ans)cout << "Yes" << endl;
//   else cout << "No" << endl;
//   return 0;
// }
