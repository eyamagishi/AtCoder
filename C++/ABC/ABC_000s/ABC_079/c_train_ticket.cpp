// bit全探索
#include <bits/stdc++.h>
using namespace std;

void ticket_sum(string ticket) {
  for (int i = 0; i < (1 << 3); i++) {
    int sum = ticket[0] - '0';
    for (int j = 0; j < 3; j++) {
      if(i & (1 << j)) sum += ticket[j + 1] - '0';
      else sum -= ticket[j + 1] - '0';
    }
    if (sum == 7) {
      cout << ticket[0];
      for (int j = 0; j < 3; j++) {
        if (i & (1 << j)) cout << "+";
        else cout << "-";
        cout << ticket[j + 1];
      }
      cout << "=7" << endl;
      return;
    }
  }

  return;
}

int main() {
  string ticket;
  cin >> ticket;

  ticket_sum(ticket);
}
