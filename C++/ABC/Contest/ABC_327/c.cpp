// AC: 29:29
#include<bits/stdc++.h>
using namespace std;

int main() {
  int A[9][9];
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      cin >> A[i][j];
    }
  }

  for(int i = 0; i < 9; i++) {
    vector<bool> check(10, true);
    for(int j = 0; j < 9; j++) {
      if(check[A[i][j]]) {
        check[A[i][j]] = false;
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  for(int j = 0; j < 9; j++) {
    vector<bool> check(10, true);
    for(int i = 0; i < 9; i++) {
      if(check[A[i][j]]) {
        check[A[i][j]] = false;
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  for(int k = 0; k < 3; k++) {
    for(int l = 0; l < 3; l++) {
      vector<bool> check(10, true);
      for(int i = 3 * k; i < 3 + 3 * k; i++) {
        for(int j = 3 * l; j < 3 + 3 * l; j++) {
          if(check[A[i][j]]) {
            check[A[i][j]] = false;
          } else {
            cout << "No" << endl;
            return 0;
          }
        }
      }
    }
  }

  cout << "Yes" << endl;
}
