#include <iostream>
using namespace std;

int main()
{
  int n, a, criminals = 0;
  cin >> n >> a;
  int arr[n];

  for (int &i : arr)
    cin >> i;
  a--;
  if (arr[a] == 1)
    criminals++;
  for (int i = 1; a+i < n || a-i >= 0; ++i)
  {
    if (a+i >= n && a-i >= 0)
    {
      if (arr[a-i] == 1)
        criminals++;
    }
    else if (a+i < n && a-i < 0)
    {
      if (arr[a+i] == 1)
        criminals++;
    }
    else if (arr[a+i] == 1 || arr[a-i] == 1)
    {
      if (arr[a+i] == 1 && arr[a-i] == 1)
        criminals += 2;
    }
  }
  cout << criminals << endl;
  return 0;
}
