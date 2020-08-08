#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int matrix[5][5], count;

  for (int i = 0; i < 5; ++i)
    for (int j = 0; j < 5; ++j)
    {
      cin >> matrix[i][j];
      if (matrix[i][j] == 1)
        count = abs(i-2) + abs(j-2);
    }

  cout << count << endl;
  return 0;
}
