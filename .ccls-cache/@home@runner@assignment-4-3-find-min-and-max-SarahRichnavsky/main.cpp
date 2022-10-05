#include <iostream>
using namespace std;

int main() {
  int num1, num2, num3, min, max;

  cin >> num1 >> num2 >> num3;

  if (num1 > num2) {
    if (num2 < num3)
      min = num2;
    else
      cout << num3 << "is min number\n";
  } else {
    if (num1 < num3)
      cout << num1 << "is min number\n";
    else
      cout << num3 << "is min number\n";
  }
  if (num1 < num2) {
    if (num2 > num3)
      cout << num2 << "is min number\n";
    else
      cout << num3 << "is min number\n";
  } else {
    if (num1 > num3)
      cout << num1 << "is min number\n";
    else
      cout << num3 << "is min number\n";
  }
}