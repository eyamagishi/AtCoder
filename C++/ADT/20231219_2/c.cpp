#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> s(10, vector<char>(10));

int s_x_checked(int y, int x){
  if (10 <= x || s.at(y).at(x) == '.') return x;
  return s_x_checked(y, x + 1);
}

int s_y_checked(int y, int x){
  if (10 <= y || s.at(y).at(x) == '.') return y;
  return s_y_checked(y + 1, x);
}

int main() {
  for (int y = 0; y < 10; y++) {
    for (int x = 0; x < 10; x++) {
      cin >> s.at(y).at(x);
    }
  }

  for (int y = 0; y < 10; y++) {
    for (int x = 0; x < 10; x++) {
      if(s.at(y).at(x) == '.') continue;
      cout << y + 1 << ' ' << s_y_checked(y, x) << endl;
      cout << x + 1 << ' ' << s_x_checked(y, x) << endl;
      return 0;
    }
  }
}
