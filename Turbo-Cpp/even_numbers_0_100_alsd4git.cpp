//print even numbers form 0 to 100
#include <iostream>
using namespace std;

int main () {
  cout << "in this program we will be printing even numbers from 0 to 100\n";
  int x = 0;
  do{
      cout << x << "\n";
      x += 2;
    } while (x < 101);
  return 0;
}
