// AC(1): 56:52
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int size = s.size();
  for (int i = 0; i < size - 2; i++) {
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
      s.erase(i, 3);
      size -= 3;
      if (size <= 0) break;
      else if (2 < i) i -= 3;
      else i = -1;
    }
  }

  cout << s << endl;
}

// 解説 by leaf1415
// #include <iostream>
// using namespace std;

// int main() {
//   string s, ans;
//   cin >> s;

//   for(auto c : s){
//     ans += c;
//     if(ans.size() >= 3
//       && ans.substr(ans.size()-3) == "ABC") ans.erase(ans.end()-3, ans.end());
//   }
//   cout << ans << endl;

//   return 0;
// }
