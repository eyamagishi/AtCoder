#include<bits/stdc++.h>
using namespace std;

int main() {
  unsigned short int N;
  unsigned long int M;
  cin >> N >> M;
  unsigned long int A[N];
  for(int i=0;i < N;i++) {
    cin >> A[i];
  }
  unsigned short int max=0;
  for(int i=0;i < N;i++) {
    unsigned long int x = A[i];
    unsigned short int x_max=0;
    for(int i=0;i < N;i++) {
      if(x <= A[i] && A[i] < x + M) {x_max++;}
    }
    if(max < x_max) {max = x_max;}
  }
  cout << max << endl;
  return 0;
}

// 問題文
// 高橋くんは数直線上に N 個のプレゼントを置きました。そのうち i 個目のプレゼントは座標 Ai に置かれました。
// あなたは数直線上の長さ M の半開区間 [x,x+M) を選び、そこに含まれるプレゼントを全て獲得します。
// より詳しくは、以下の手順でプレゼントを獲得します。

// まず、実数 x をひとつ選択する。
// その後、プレゼントのうち置かれている座標が x≤A i <x+M を満たすものを全て獲得する。

// 最大でいくつのプレゼントを獲得することができますか?

// 制約
// 入力は全て整数
// 1≤N≤3×10^5
// 1≤M≤10^9
// 0≤A^i≤10^9

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N M
// A1 A2 … AN

// 出力
// 答えを整数として出力せよ。