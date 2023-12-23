// AC: 36:25
// 左シフト
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int N = (int)S.size();
  queue<char> QS;
  for (int i = 0; i < N; i++) {
    QS.push(S[i]);
  }

  queue<char> S_min = QS, S_max = QS;
  for (int i = 1; i < N; i++) {
    char c = QS.front();
    QS.pop();
    QS.push(c);
    if (S_min > QS) S_min = QS;
    if (S_max < QS) S_max = QS;
  }

  for (int i = 0; i < N; i++) {
    cout << S_min.front();
    S_min.pop();
  }
  cout << endl;
  for (int i = 0; i < N; i++) {
    cout << S_max.front();
    S_max.pop();
  }
  cout << endl;
}

// 解説 by KoD
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   string s;
//   cin >> s;

//   int n = s.size();
//   vector<string> v(n);
//   for (int i = 0; i < n; ++i) v[i] = s.substr(i, n - i) + s.substr(0, i);
//   cout << *min_element(begin(v), end(v)) << endl;
//   cout << *max_element(begin(v), end(v)) << endl;
// }
