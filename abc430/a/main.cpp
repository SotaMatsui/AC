#include <iostream>
#include <string>

using namespace std;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  string ans = ((c >= a) && (d < b)) ? "Yes" : "No";
  cout << ans << endl;

  return 0;
}
