#include <bits/stdc++.h>
using namespace std;

int H, W;
vector<string> A(101);

int check() {
  // 行の確認
  for (int y = 0; y < H; y++) {
    bool ok = true;
    for (int x = 0; x < W; x++) if(A[y][x] == '#') ok = false;
    if (ok) {
      for (int yy = y + 1; yy < H; yy++) {
        swap(A[yy - 1], A[yy]);
      }
      H--;
      return 1;
    }
  }

  // 列の確認
  for (int x = 0; x < W; x++) {
    bool ok = true;
    for (int y = 0; y < H; y++) if(A[y][x] == '#') ok = false;
    if (ok) {
      for (int yy = 0; yy < H; yy++) {
        A[yy] = A[yy].substr(0, x) + A[yy].substr(x + 1);
      }
      W--;
      return 1;
    }
  }
  return 0;
}

int main() {
  cin >> H >> W;
  for (int i = 0; i < H; i++) cin >> A.at(i);
  while(check());
  for(int y = 0; y < H; y++) {
    for(int x = 0; x < W; x++) {
      cout << A[y][x];
    }
    cout << endl;
  }
}