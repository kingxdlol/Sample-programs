//greater between 3 integer numbers
#include <iostream>
using namespace std;

int main (){
  int x, y, z, greater;
  cout << "insert the first number\n\t";
  cin >> x;
  greater = x;
  cout << "insert the second number\n\t";
  cin >> y;
  if (y >= greater){
      greater = y;
    }
  cout << "insert the third number\n\t";
  cin >> z;
  if (z >= greater){
      greater = z;
    }
  cout << "\nthe bigger one is: " << greater << "\n";
  return 0;
}
