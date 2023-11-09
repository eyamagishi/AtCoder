#include <bits/stdc++.h>
using namespace std;

void fill_islands(vector<vector<char>> &islands, vector<vector<bool>> &checked, int y, int x) {
  if (y < 0 || x < 0 || y >= 10 || x >= 10) return;
  if (islands.at(y).at(x) == 'x') return;
  if (checked.at(y).at(x)) return;

  checked.at(y).at(x) = true;
  fill_islands(islands, checked, y - 1, x);
  fill_islands(islands, checked, y + 1, x);
  fill_islands(islands, checked, y, x - 1);
  fill_islands(islands, checked, y, x + 1);
}

bool check_islands(vector<vector<char>> &islands) {
  int y = 0, x = 0;
  vector<vector<bool>> checked(10, vector<bool>(10, false));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if(islands.at(i).at(j) == 'o') {
        y = i;
        x = j;
        break;
      }
    }
  }

  fill_islands(islands, checked, y, x);

  bool ok = true;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if(islands.at(i).at(j) == 'o') {
        if(!checked.at(i).at(j)) ok = false;
      }
    }
  }
  return ok;
}

int main() {
  vector<vector<char>> islands(10, vector<char>(10));
  for (int y = 0; y < 10; y++) {
    for (int x = 0; x < 10; x++) {
      cin >> islands.at(y).at(x);
    }
  }

  for (int y = 0; y < 10; y++) {
    for (int x = 0; x < 10; x++) {
      if(islands.at(y).at(x) == 'o') continue;

      islands.at(y).at(x) = 'o';
      if(check_islands(islands)){
        cout << "YES" << endl;
        return 0;
      }
      islands.at(y).at(x) = 'x';
    }
  }

  cout << "NO" << endl;
}
