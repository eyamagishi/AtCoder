#include <bits/stdc++.h>
using namespace std;

constexpr int nmax = 200200;
int N, M;
int A[nmax], B[nmax];
vector<int> g[nmax]; // 各点がどこにつながっているかを保存するための配列
int X[nmax]; // 訪問フラグ
int bipartite = true; // 二部グラフのフラグ

void dfs(int c, int x) {
  // 訪問マークを付ける
  X[c] = x;
  for (int& d : g[c]) {
    if (X[d] == -1) { // 未訪問のとき
    // 再帰処理。次の場所には現在地と別の数字(0, 1)を入力する。
      dfs(d, 1 - x);
    } else if (X[d] == X[c]) { // 既に訪問されており、かつ現在地と次の場所の値が一致しているとき
      bipartite = false;
    }
  }
}

int main() {
  cin >> N >> M;
  for (int i = 0; i < M; i++) cin >> A[i], A[i]--; // 頂点Aに記述された数字
  for (int i = 0; i < M; i++) cin >> B[i], B[i]--; // 頂点Bに記述された数字
  for (int i = 0; i < M; i++) {
    g[A[i]].push_back(B[i]);
    g[B[i]].push_back(A[i]);
  }

  // 0, 1からなる配列の情報を保存。-1は未訪問
  for (int i = 0; i < N; i++) X[i] = -1;
  for (int i = 0; i < N; i++) {
    if (X[i] == -1) dfs(i, 0);
  }
  cout << (bipartite ? "Yes" : "No") << endl;
}
