// WA: (6)
#include<bits/stdc++.h>
using namespace std;

int main() {
  unsigned long long int b;
  cin >> b;
  unsigned int num = 1;
  while(true) {
    unsigned long long int N = pow(num, num);
    if(b == N) {
      cout << num << endl;
      return 0;
    } else if(b < N || N == 0) {
      cout << -1 << endl;
      return 0;
    }
    num++;
  }
}

// 敗因:
// - pow関数の誤差について考慮していなかった。
// - 上限について厳密に考えていなかった

// 考察:
// - pow関数は浮動小数点型であり、それを考慮した動きをしてしまうためその茣蓙がでてきてしまう。
// - 今回の制約が
//   1 ≤ B ≤ 10^18
//   であるためA^Aの数字は15を上限として考えて問題なかった。
//   実装中にローカル環境やネットなどでA^Aの桁数について確認を行えばよかった。