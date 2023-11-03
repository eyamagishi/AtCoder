#include<iostream>

using namespace std;

int main(){
  int people = 0;
  bool great = false,bad = false;
  cin >> people;
  char evaluation[people] = {};
  for(int i = 0;i < people;i++){
    cin >> evaluation[i];
    if(bad == false && evaluation[i] == 'x')bad = true;
    if(great == false && evaluation[i] == 'o')great = true;
  }
  if(great == true && bad == false)cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}