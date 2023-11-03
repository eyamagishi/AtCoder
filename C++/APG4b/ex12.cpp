#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int num = 0;
  int flg = 0; //0:+, 1:-
  for(int i=0;i < S.size();i++) {
    if(i%2 == 0) {
      if(flg == 0) {num += S[i] - ('1' - 1);}
      else {num -= S[i] - ('1' - 1);}
    } else {
      if(S[i] == '+') {flg = 0;}
      else {flg = 1;}
    }
  }
  cout << num << endl;
  return 0;
}
