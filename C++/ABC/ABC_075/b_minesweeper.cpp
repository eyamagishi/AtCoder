#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  string s[h];
  for(int i = 0;i < h;i++) {cin >> s[i];}

  for(int y = 0;y < h;y++) {
    for(int x = 0;x < w;x++) {
      if(s[y][x] == '.') {
        int cnt = 0;
        for(int dx = -1;dx < 2;dx++) {
          for(int dy = -1;dy < 2;dy++) {
            if (dx == 0 and dy == 0) continue;
            int xx = x + dx;
            int yy = y + dy;
            if (0 <= xx and xx < w and 0 <= yy and yy < h) {
                if (s[yy][xx] == '#') cnt++;
            }
          }
        }
        s[y][x] = char('0' + cnt);
      }
    }
  }
  for(int i = 0;i < h;i++) {
    cout << s[i] << endl;
  }
}