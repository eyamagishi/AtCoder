// AC 2:35
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  vector<int> A(n);
  for (int i = 0; i < n; i++) cin >> A.at(i);

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (l <= A.at(i)) cnt++;
  }

  cout << cnt << endl;
}

// A - Counting Passes 解説 by physics0523
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n, l;
//   cin >> n >> l;
//   int ok = 0;
//   for (int i = 0; i < n; i++){
//     int a;
//     cin >> a;
//     if (a >= l) {ok++;}
//   }
//   cout << ok << endl;
//   return 0;
// }
