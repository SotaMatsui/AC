#include <iostream>
#include <string>

using namespace std;

int main()
{
  int X, Y, Z;
  cin >> X >> Y >> Z;

  int diff = X - Y;
  int YatMatch = diff / (Z - 1);

  if (YatMatch >= Y) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
