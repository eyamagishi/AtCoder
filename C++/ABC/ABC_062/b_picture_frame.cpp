#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> pic(h);
  for(int y = 0;y < h;y++) {
    cin >> pic.at(y);
  }
  string add_str = "";
  for(int x=0;x < w + 2;x++) {
    add_str += '#';
  }
  for(int y = 0;y < h;y++) {
    pic[y] = '#' + pic[y] + '#';
  }
  pic.insert(pic.begin(), add_str);
  pic.insert(pic.end(), add_str);
  for(int y = 0;y < h + 2;y++) {
    cout << pic[y] << endl;
  }
}