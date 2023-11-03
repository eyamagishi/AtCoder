#include<iostream>

using namespace std;

int main(){
  int num;
// 以下入力
  cin >> num;
  int array_a[num][num], array_b[num][num];
  for(int i = 0;i < num;i++) for(int j = 0;j < num;j++) cin >> array_a[i][j];
  for(int i = 0;i < num;i++) for(int j = 0;j < num;j++) cin >> array_b[i][j];
// 以下計算・出力
  for(int n = 0;n < 4;n++){
    bool judge = true;
    for(int i = 0;i < num;i++)for(int j = 0;j < num;j++)if(array_a[i][j] == 1 && array_b[i][j] == 0) judge = false;
    if(judge){
      cout << "Yes" <<endl;
      return 0;
    }
    int array_rotate[num][num] = {};
    for(int i = 0;i < num;i++) for(int j = 0;j < num;j++)array_rotate[j][num - 1 - i] = array_a[i][j];
    for(int i = 0;i < num;i++) for(int j = 0;j < num;j++)array_a[i][j] = array_rotate[i][j];
  }
  cout << "No" <<endl;
  return 0;
}