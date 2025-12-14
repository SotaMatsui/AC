#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> heights(N);

  for (int i = 0; i < N; i++)
  {
    cin >> heights[i];
    int candidate = -1;
    for (int j = 0; j < i; j++)
    {
      if (heights[j] > heights[i])
      {
        candidate = j + 1;
      }
    }
    cout << candidate << endl;
  }

  return 0;
}