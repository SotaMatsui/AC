#include <bits/stdc++.h>

using namespace std;

int main()
{
  int X, N, Q;
  cin >> X >> N;

  vector<int> W(N);
  for (int i = 0; i < N; i++)
  {
    cin >> W[i];
  }

  int x = X;
  vector<bool> isOn(X, false);

  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    int P_i;
    cin >> P_i;
    if (isOn[P_i - 1])
    {
      x -= W[P_i - 1];
    }
    else
    {
      x += W[P_i - 1];
    }
    cout << x << endl;
    isOn[P_i - 1] = !isOn[P_i - 1];
  }

  return 0;
}
