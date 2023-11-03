#include<bits/stdc++.h>
using namespace std;

const int MAX_NUM = 919;

bool check_326_like_numbers(int N) {
  int c100 = N / 100;
  int c10 = N % 100 / 10; //  int c10=n/10%10; でも可能
  int c1 = N % 10;
  return c100 * c10 == c1;
}

int main() {
  unsigned short int N;
  cin >> N;
  for (int i = N;i <= MAX_NUM;i++) {
    if (check_326_like_numbers(i)) {
      cout << i << endl;
      return 0;
    }
  }
  return 1;
}


// 問題文
// 3 桁の正整数であって、百の位の数と十の位の数の積が一の位の数と等しいものを 326-like number と呼びます。

// 例えば 
// 326,400,144 は 326-like number であり、
// 623,777,429 は 326-like number ではありません。

// 整数 
// N が与えられるので、
// N 以上の最小の 326-like number を求めてください。なお、制約の条件下で答えは必ず存在します。

// 制約
// 100≤N≤919
// N は整数である
// 入力
// 入力は以下の形式で標準入力から与えられる。

// N
// 出力
// 答えを出力せよ。