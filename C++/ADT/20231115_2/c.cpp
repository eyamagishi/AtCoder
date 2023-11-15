// AC: 10:38
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> S(n);
  for (int i = 0; i < n; i++) cin >> S.at(i);

  for (int i = 0; i < n; i++) {
    if((S.at(i).at(0) == 'H' || S.at(i).at(0) == 'D' || S.at(i).at(0) == 'C' || S.at(i).at(0) == 'S') &&
      S.at(i).at(1) == 'A' || S.at(i).at(1) == '2' || S.at(i).at(1) == '3' || S.at(i).at(1) == '4' ||
      S.at(i).at(1) == '5' || S.at(i).at(1) == '6' || S.at(i).at(1) == '7' || S.at(i).at(1) == '8' ||
      S.at(i).at(1) == '9' || S.at(i).at(1) == 'T' || S.at(i).at(1) == 'J' || S.at(i).at(1) == 'Q' || S.at(i).at(1) == 'K') {
        for (int j = i + 1; j < n; j++) {
          if(S.at(i) == S.at(j)) {
            cout << "No" << endl;
            return 0;
          }
        }
    } else {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
