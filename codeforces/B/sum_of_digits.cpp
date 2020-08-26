#include <iostream>
#include <string>
using namespace std;

int main()
{
  int k, casts = 0;
  string n;
  cin >> n;

  while (n.length() > 1)
  {
    k = 0;
    for (auto i : n)
      k += i - '0';
    n = to_string(k);
    casts++;
  }

  cout << casts << endl;
  return 0;
}
