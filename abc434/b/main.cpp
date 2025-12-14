#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> birds(N,vector<int>(2,0));
  
  for (int i = 0; i < N; i++)
  {
    cin >> birds[i][0] >> birds[i][1];
  }
  vector<float> sum(M, 0);
  vector<int> n(M, 0);
  for (int i = 0; i < N; i++)
  {
    sum[birds[i][0] - 1] += birds[i][1];
    n[birds[i][0] - 1]++;
  }
  for (int i = 0; i < M; i++)
  {
    cout << sum[i] / n[i] << endl;
  }

  return 0;
}