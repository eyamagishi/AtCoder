#include<bits/stdc++.h>
using namespace std;

int main() {
  unsigned short int X,Y;
  cin >> X >> Y;
  if (-3 <= Y - X && Y - X <= 2) {cout << "Yes" << endl;}
  else {cout << "No" << endl;}

  return 0;
}

// 問題文
// 高橋君が 
// 100 階建てのビルにいます。

// 高橋君は 
// 2 階分までの上り、または、
// 3 階分までの下りであれば移動には階段を使い、そうでないときエレベーターを使います。

// 高橋君が 
// X 階から 
// Y 階への移動に使うのは階段ですか？

// 制約
// 1≤X,Y≤100
// X
// 
// =Y
// 入力は全ては整数である
// 入力
// 入力は以下の形式で標準入力から与えられる。

// X 
// Y
// 出力
// 移動に使うのが階段ならば Yes、エレベーターならば No を出力せよ。