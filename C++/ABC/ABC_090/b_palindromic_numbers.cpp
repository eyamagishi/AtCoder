#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, cnt = 0;
  cin >> a >> b;
  for(int i = 0;i <= b - a;i++) {
    int num = b - i;
    int num10000 = num / 10000;
    int num1000 = num % 10000 / 1000;
    int num10 = num % 100 / 10;
    int num1 = num % 10;
    if(num10000 == num1 && num1000 == num10) {cnt++;}
  }
  cout << cnt << endl;
  return 0;
}