// AC
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int size = s.size();
  for(int i = 0; i < 6; i++) cout << s[i%size];
}