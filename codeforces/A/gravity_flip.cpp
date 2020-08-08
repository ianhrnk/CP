#include <iostream>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
  int n, diff;
  cin >> n;
  int array[n];

  for (int i = 0; i < n; ++i)
    cin >> array[i];

  qsort(array, n, sizeof(int), compare);

  for (int i = 0; i < n; ++i)
    cout << array[i] << " ";
  cout << '\n';
  return 0;
}
