#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> num(N);
  for(int i=0;i < N;i++) {
    cin >> num.at(i);
  }
  int ave = accumulate(num.begin(), num.end(), 0.0) / num.size();
  for(int i=0;i < N;i++) {
    if(num.at(i) < ave) {
      cout << ave - num.at(i) << endl;
    } else {
      cout << num.at(i) - ave << endl;
    }
  }
}
