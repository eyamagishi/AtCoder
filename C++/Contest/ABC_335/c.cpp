#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> dragon_x, dragon_y;
  for (int i = n; 0 < i; i--) {
    dragon_x.push_back(i);
    dragon_y.push_back(0);
  }
  for (int i = 0; i < q; i++) {
    int num, dragon_end = (int)dragon_x.size() - 1;
    cin >> num;
    if (num == 1) {
      char coordinate;
      cin >> coordinate;

      if (coordinate == 'R') {
        dragon_x.push_back(dragon_x.at(dragon_end) + 1);
        dragon_y.push_back(dragon_y.at(dragon_end));
      } else if (coordinate == 'L') {
        dragon_x.push_back(dragon_x.at(dragon_end) - 1);
        dragon_y.push_back(dragon_y.at(dragon_end));
      } else if (coordinate == 'U') {
        dragon_x.push_back(dragon_x.at(dragon_end));
        dragon_y.push_back(dragon_y.at(dragon_end) + 1);
      } else {
        dragon_x.push_back(dragon_x.at(dragon_end));
        dragon_y.push_back(dragon_y.at(dragon_end) - 1);
      }
    } else {
      int coordinate;
      cin >> coordinate;
      coordinate--;
      cout << dragon_x.at(dragon_end - coordinate) << ' ' << dragon_y.at(dragon_end - coordinate) << endl;
    }
  }
}
