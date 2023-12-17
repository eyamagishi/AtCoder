// AC(1): 17:38
#include <bits/stdc++.h>
using namespace std;

int main() {
  long a, b, k;
  cin >> a >> b >> k;

  long sum = a, cnt = 0;
  while (sum < b) {
    sum *= k;
    cnt++;
  }

  cout << cnt << endl;
}

// C - Slimes 解説 by nok0
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   long long a, b, k;
//   cin >> a >> b >> k;

//   int res = 0;
//   while (a < b) {
//     a *= k;
//     res++;
//   }

//   cout << res << endl;
// }
