#include <iostream>
#include <string>

using namespace std;

int main()
{
  string S;
  cin >> S;
  int l = S.length();
  int count = 0;
  for (int i = 0; i < l - 1; i++)
  {
    for (int j = 1; j < l - i; j = j + 2)
    {
      int head = int(S[i] - '0');
      int tail = int(S[i + j] - '0');
      string target = S.substr(i, j + 1);
      int half = target.length() / 2;

      string fH = target.substr(0, half);
      string lH = target.substr(half, half);
      string expectedFH, expectedLH;
      for (int k = 0; k < half; k++)
      {
        expectedFH += head + '0';
        expectedLH += tail + '0';
      }
      if (head + 1 == tail && expectedFH == fH && expectedLH == lH)
      {
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}
