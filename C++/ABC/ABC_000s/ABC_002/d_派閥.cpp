// ビット全探索
// 最大クリーク問題
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int N, M;
int bit[12]{};
int G[12][12]{};
int ans = 1;

void solve() {
  for (int i = 0; i < N; i++) {
    if (bit[i] == 0) continue;
    for (int j = 0; j < N; j++) {
      if (bit[j] == 1 && G[i][j] == 0) return;
    }
  }
  int sum = 0;
  for (int i = 0; i < N; i++) {
    if (bit[i] == 1) sum++;
  }
  ans = max(ans, sum);
}

void rec(int k) {
  if (k == N) {
    solve();
    return;
  }
  rec(k + 1);
  bit[k] = 1;
  rec(k + 1);
  bit[k] = 0;
}

int main() {
  cin >> N >> M;
  int x, y;
  for (int i = 0; i < N; i++) G[i][i] = 1;
  for (int i = 0; i < M; i++) {
    cin >> x >> y;
    x--;
    y--;
    G[x][y] = 1;
    G[y][x] = 1;
  }
  rec(0);
  cout << ans << "\n";
  return 0;
}
