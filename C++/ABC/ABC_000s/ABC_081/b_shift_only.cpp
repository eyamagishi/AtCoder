#include <bits/stdc++.h>
using namespace std;


int main(){
  int n, cnt_min = 0;
  cin >> n;
  for(int i = 0;i < n;i++) {
    int a, cnt = 0;
    cin >> a;
    while (a%2 == 0) {
      cnt++;
      a /= 2;
    }
    if(cnt < cnt_min || i == 0) {cnt_min = cnt;}
  }
  cout << cnt_min << endl;

  return 0;
}