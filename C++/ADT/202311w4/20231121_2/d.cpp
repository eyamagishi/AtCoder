// WA(3)
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  for (int i = 0; i < 26; i++) {
    if (s[0] + i == t[0] ||
      (s[0] == 'z' && 'a' == t[0])) {
      for (int j = 1; j < (int)s.size(); j++) {
        if (s[j] + i == t[j] ||
          (s[j] == 'z' && 'a' == t[j])) {
            int decoy;
        } else {
          cout << "No" << endl;
          return 0;
        }
      }
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}

// D - Caesar Cipher 解説 by leaf1415
// #include <iostream>
// #include <string>
// using namespace std;

// int main(void)
// {
//   string s, t;
//   cin >> s >> t;

//   for(int k = 0; k <= 25; k++){
//     string s2 = s;
//     for(int i = 0; i < (int)s.size(); i++){
//       s2[i] = ((s2[i]-'a')+k)%26 + 'a';
//     }
//     if(s2 == t){
//       cout << "Yes" << endl;
//       return 0;
//     }
//   }
//   cout << "No" << endl;

//   return 0;
// }
