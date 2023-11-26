// AC(2) 51:36
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long l ,r;
  cin >> n >> l >> r;
  for (int i = 0; i < n; i++) {
    if(i != 0) cout << ' ';
    long a;
    cin >> a;
    if (a <= l) cout << l;
    else if (r <= a) cout << r;
    else cout << a;
  }
  cout << endl;
}

// B - Minimize Abs 1 解説 by nok0
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, x) for(int i = 0; i < (x); i++)

// int main() {
//     int n, l, r;
//     cin >> n >> l >> r;
//     vector<int> a(n);
//     rep(i, n) cin >> a[i];
//     rep(i, n) cout << clamp(a[i], l, r) << " \n"[i == n - 1];
// }
