#include <iostream>
using namespace std;

int main()
{
  int n, h, k = 0;
  cin >> n;
  
  for (int i = 0; i < n; ++i)
  {
    cin >> h;
    if (h > k)
      k = h;
  }

  cout << k << endl;
  return 0;
}
