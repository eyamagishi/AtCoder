#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if(s[s.size()-1] == 'T') {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}

// int main() {
//   string s;
//   cin >> s;
//   if((*s.rbegin()) == 'T') {
//     cout << "YES" << endl;
//   } else {
//     cout << "NO" << endl;
//   }
//   return 0;
// }