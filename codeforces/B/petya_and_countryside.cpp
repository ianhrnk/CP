#include <iostream>
using namespace std;

int main()
{
  int n, max = 1, count;
  cin >> n;
  int x[n];
  for (int i = 0; i < n; ++i)
    cin >> x[i];

  for (int i = 0; i < n; ++i)
  {
    count = 1;
    for (int j = i+1; j < n; ++j)
    {
      if (x[j] <= x[j-1])
        count++;
      else
        break;
    }
    for (int j = i-1; j >= 0; --j)
    {
      if (x[j] <= x[j+1])
        count++;
      else
        break;      
    }
    if (count > max)
      max = count;
  }
  cout << max << endl;
  return 0;
}
