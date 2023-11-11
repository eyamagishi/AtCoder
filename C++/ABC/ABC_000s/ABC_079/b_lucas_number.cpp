#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main() {
  int N;
  cin >> N;

  ll L[N + 1];
  L[0] = 2, L[1] = 1;
  for (int i = 2; i <= N; i++) L[i] = L[i - 1] + L[i - 2];

  cout << L[N] << endl;
}

// 下記が1つWAを出してしまったが原因が分からない。解説には特に言及されていないため不明。
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll ;

// int main() {
//   int N;
//   cin >> N;

//   ll sum = 0, l1 = 1, l2 = 2;
//   for (int i = 2; i <= N; i++) {
//     sum = l1 + l2;
//     l2 = l1;
//     l1 = sum;
//   }

//   cout << sum << endl;
// }
