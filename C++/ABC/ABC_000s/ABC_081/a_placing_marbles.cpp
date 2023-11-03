#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum = 0;
  char s;
  for(int i=0;i < 3;i++) {
    cin >> s;
    if(s == '1') {sum++;}
  }
  cout << sum << endl;
  return 0;
}