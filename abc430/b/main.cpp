#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<string> grid(n);

  for (int i = 0; i < n; i++)
  {
    cin >> grid[i];
  }

  int maxOffset = n - m;
  vector<string> subgrids;

  for (int rowOffset = 0; rowOffset < maxOffset + 1; rowOffset++)
  {
    for (int colOffset = 0; colOffset < maxOffset + 1; colOffset++)
    {
      string subgrid;
      for (int i = 0; i < m; i++)
      {
        subgrid += grid[rowOffset + i].substr(colOffset, m) + "\n";
      }
      if (find(subgrids.begin(), subgrids.end(), subgrid) == subgrids.end())
      {
        subgrids.push_back(subgrid);
      }
    }
  }

  cout << subgrids.size();

  return 0;
}