#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> A(h, vector<int>(w));
  for (int y = 0; y < h; y++) for (int x = 0; x < w; x++) cin >>A.at(y).at(x);

  for (int y_1 = 0; y_1 < h; y_1++) {
    for (int x_1 = 0; x_1 < w; x_1++) {
      for (int y_2 = y_1 + 1; y_2 < h; y_2++) {
        for (int x_2 = x_1 + 1; x_2 < w; x_2++) {
          if ((A.at(y_1).at(x_1) + A.at(y_2).at(x_2)) > (A.at(y_1).at(x_2) + A.at(y_2).at(x_1))) {
            cout << "No" << endl;
            return 0;
          }
        }
      }
    }
  }

  cout << "Yes" << endl;
}
