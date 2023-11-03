#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;
  cin >> c;
  if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
    cout << "vowel" << endl;
  } else {
    cout << "consonant" << endl;
  }
  return 0;
}

// int main() {
//   char c ;
//   cin >> c ;
//   const string vowel = "aeiou";
//   string str = vowel.find(c) == string::npos ? "consonant" : "vowel";
//   cout << str << endl;
//   return 0;
// }