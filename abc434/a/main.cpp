#include <iostream>
#include <string>

using namespace std;

int main()
{
  int W, B;
  cin >> W >> B;
  int min = W * 1000 / B + 1;
  cout << min << endl;

  return 0;
}
