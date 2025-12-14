#include <bits/stdc++.h>
using namespace std;

int rotate(vector<int> part, int sum)
{
  int height = part[0];
  // cout << "checked" << height << "(" << part.size() << ")" << endl;
  if (height >= part.size())
  {
    return sum + part.size();
  }
  if(height == 1){
    return sum + 1;
  }

  int nextHeight = sum + height - 1;
  if (nextHeight == 1) {
    for (int i = 1; i < height; i++){
      int target = height - i;
      if(part[i] > target){
        vector<int> next;
        copy(part.begin() + part[i] - 1, part.end(), back_inserter(next));
        return rotate(next, nextHeight);
      }
    }
  }

  vector<int> next;
  copy(part.begin() + height - 1, part.end(), back_inserter(next));
  return rotate(next, nextHeight);
}

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  cout << rotate(A, 0) << endl;
  return 0;
}
