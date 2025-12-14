#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  int count = 0;
  for (int l = 0; l < N; l++)
  {
    for (int r = l; r < N; r++)
    {
      // cout << "----testing(" << l << "," << r << "): " << endl;
      vector<int> part;
      copy(A.begin() + l, A.begin() + r + 1, back_inserter(part));
      int sum = reduce(part.begin(), part.end());
      int subCount = 0;
      for (auto item : part)
      {
        // cout << item << " ";
        if (sum % item == 0) // itemがsumの約数である
        {
          // cout << "found valid divider:" << item << "for sum " << sum << endl;
          subCount++;
          break;
        }
      }
      if(subCount == 0)
        count++;
    }
  }
  cout << count << endl;
  return 0;
}
