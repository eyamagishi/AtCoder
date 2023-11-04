#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  string ans = "NO";
  for(int i=0;i < data.size();i++) {
    int num = data.at(i);
    if((i != 0 && num ==  data.at(i - 1)) ||
      (i != data.size() - 1 && num == data.at(i + 1))) {
      ans = "YES";
      break;
    }
  }
  cout << ans << endl;
}
