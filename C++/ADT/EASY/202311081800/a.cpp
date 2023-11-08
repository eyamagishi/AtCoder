#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1, y1, x2, y2, x3, y3, x_sum, y_sum;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  if(x1 == x2) {
    x_sum = x3;
  } else if(x2 == x3) {
    x_sum = x1;
  } else if(x3 == x1) {
    x_sum = x2;
  }
  if(y1 == y2) {
    y_sum = y3;
  } else if(y2 == y3) {
    y_sum = y1;
  } else if(y3 == y1) {
    y_sum = y2;
  }

  cout << x_sum << ' ' << y_sum << endl;
}

// #include <iostream>
// using namespace std;

// int main(void)
// {
//   int x_1, x_2, x_3, y_1, y_2, y_3, x_ans, y_ans;

//   cin >> x_1 >> y_1;
//   cin >> x_2 >> y_2;
//   cin >> x_3 >> y_3;

//   if(x_1 == x_2) x_ans = x_3;
//   if(x_2 == x_3) x_ans = x_1;
//   if(x_3 == x_1) x_ans = x_2;

//   if(y_1 == y_2) y_ans = y_3;
//   if(y_2 == y_3) y_ans = y_1;
//   if(y_3 == y_1) y_ans = y_2;

//   cout << x_ans << " " << y_ans << endl;

//   return 0;
// }
