#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  int X;
  cin >> X;
  int xLength = log10(X) + 1;

  vector<int> final(xLength);
  vector<int> ns;
  vector<int> zeros;
  int xRemain = X;
  for (int i = xLength - 1; i >= 0; i--)
  {
    int digit = xRemain / pow(10, i);
    xRemain = xRemain - digit * pow(10, i);
    if (digit == 0)
    {
      zeros.push_back(digit);
    }
    else
    {
      ns.push_back(digit);
    }
  }

  sort(ns.begin(), ns.end());
  
  for (int i = 0; i < final.size(); i++)
  {
    if (i == 0)
    {
      cout << ns[0];
    }
    else if (i <= zeros.size())
    {
      cout << zeros[i - 1];
    }
    else
    {
      cout << ns[i - zeros.size()];
    }
  }

  cout << endl;

  return 0;
}
