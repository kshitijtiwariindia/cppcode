#include <iostream>
using namespace std;

int main() {
 string introduction = "Hi! \nI am going to help you in addition.\nJust give me a number and press enter. Then give me another and press enter. \n";
  cout << introduction;
  int x;
  cout << " ";
  cin >> x;
  int y;
  cout << "+";
  cin >> y;
  cout << "---------- \n";
  cout << " ";
  cout << x+y;
  cout << "\n";

  return 0;
}

