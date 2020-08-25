#include <iostream>
using namespace std;

int main()
{
  int n, m, k, l;
  int a[10] = {0};
  int matches = 0;
  cin >> n >> m;

  for (int i = 0; i < m; ++i)
  {
    cin >> k >> l;
    a[l-1] += k;
  }

  for (int i = 9; i >= 0 && n > 0; --i)
  {
    if (a[i] != 0)
    {
      if (a[i] > n)
      {
        matches += n * (i+1);
        n = 0;
      }
      else
      {
        n -= a[i];
        matches += a[i] * (i+1);
      }
    }
  }

  cout << matches << endl;
  return 0;
}
