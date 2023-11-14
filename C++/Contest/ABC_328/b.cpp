// AC: 16:34
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int d[n];
  for (int i = 0; i < n; i++) cin >> d[i];

  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (i < 9) {
      if (i + 1 <= d[i]) sum++;
      if((i + 1) * 10 + i + 1 <= d[i]) sum++;
    } else if ((i + 1) / 10 == (i + 1) % 10) {
      int num = (i + 1) % 10;
      if (num <= d[i]) sum++;
      if ((i + 1) <= d[i]) sum++;
    }
  }

  cout << sum << endl;
}

// 解説 by MMNMM
// 1. それぞれの日付がゾロ目かチェックする
// #include <iostream>
// #include <vector>
// #include <set>

// using namespace std;

// int main() {
//   int N;
//   cin >> N;
//   vector<int> D(N);
//   for (auto &&d : D) cin >> d;

//   int ans = 0;
//   for (int m = 1; m <= N; ++m) {
//     string month = to_string(m);
//     for (int d = 1; d <= D[m - 1]; ++d) {
//       string date = month + to_string(d);
//       if (size(set<char>(date.begin(), date.end())) == 1) ++ans;
//     }
//   }
//   cout << ans << endl;

//   return 0;
// }


// 2. ゾロ目の日付が存在するかチェックする
// #include <iostream>
// #include <vector>
// #include <utility>

// using namespace std;

// int main() {
//   int N;
//   cin >> N;
//   vector<int> D(N);
//   for(auto&& d : D)cin >> d;

//   vector<pair<int, int>> zorome; // ありえるゾロ目の日付
//   for(int i = 1; i <= 9; ++i){
//     zorome.emplace_back(i, i);
//     zorome.emplace_back(i, i * 11);
//     zorome.emplace_back(i * 11, i);
//     zorome.emplace_back(i * 11, i * 11);
//   }

//   int ans{};
//   for(const auto& [month, day] : zorome)
//     if(month <= N && day <= D[month - 1]) ++ans;

//   cout << ans << endl;

//   return 0;
// }
